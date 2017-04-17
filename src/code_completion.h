#include "atomic_object.h"
#include "language_server_api.h"
#include "libclangmm/CompletionString.h"
#include "libclangmm/Index.h"
#include "libclangmm/TranslationUnit.h"
#include "project.h"
#include "working_files.h"

#include <clang-c/Index.h>

#include <functional>

struct CompletionSession {
  CompilationEntry file;

  // The active translation unit.
  std::unique_ptr<clang::TranslationUnit> active;
  std::unique_ptr<clang::Index> active_index;

  // Updated translation unit. If |is_updated_ready| is true, then |updated|
  // contains more recent state than |active| and the two should be swapped.
  // TODO: implement this. Needs changes in Refresh and CodeComplete.
  //bool is_updated_ready = false;
  //std::unique_ptr<clang::TranslationUnit> updated;
  //std::unique_ptr<clang::Index> updated_index;

  CompletionSession(const CompilationEntry& file, WorkingFiles* working_files);
  ~CompletionSession();

  // Refresh file index.
  void Refresh(std::vector<CXUnsavedFile>& unsaved);
};

struct CompletionManager {
  std::vector<std::unique_ptr<CompletionSession>> sessions;
  Project* project;
  WorkingFiles* working_files;

  using OnComplete = std::function<void(NonElidedVector<lsCompletionItem> results)>;
  struct CompletionRequest {
    lsTextDocumentPositionParams location;
    OnComplete on_complete;
  };
  AtomicObject<CompletionRequest> completion_request;

  CompletionManager(Project* project, WorkingFiles* working_files);

  // Start a code completion at the given location. |on_complete| will run when
  // completion results are available. |on_complete| may run on any thread.
  void CodeComplete(const lsTextDocumentPositionParams& completion_location, const OnComplete& on_complete);

  CompletionSession* GetOrOpenSession(const std::string& filename);
};