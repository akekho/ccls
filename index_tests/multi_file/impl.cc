#include "header.h"

void Impl() {
  Foo1<int>();
}

/*
OUTPUT: header.h
{
  "includes": [],
  "skipped_ranges": [],
  "usr2func": [{
      "usr": 11650481237659640387,
      "detailed_name": "void Foo1()",
      "qual_name_offset": 5,
      "short_name": "Foo1",
      "kind": 12,
      "storage": 0,
      "declarations": [],
      "spell": "10:6-10:10|0|1|2",
      "extent": "10:1-10:15|0|1|0",
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }],
  "usr2type": [{
      "usr": 53,
      "detailed_name": "",
      "qual_name_offset": 0,
      "short_name": "",
      "kind": 0,
      "declarations": [],
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [2638219001294786365, 8395885290297540138],
      "uses": []
    }, {
      "usr": 529393482671181129,
      "detailed_name": "struct Foo2 {}",
      "qual_name_offset": 7,
      "short_name": "Foo2",
      "kind": 23,
      "declarations": [],
      "spell": "13:8-13:12|0|1|2",
      "extent": "13:1-13:15|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": []
    }, {
      "usr": 619345544228965342,
      "detailed_name": "using Foo0 = SameFileDerived",
      "qual_name_offset": 6,
      "short_name": "Foo0",
      "kind": 252,
      "declarations": [],
      "spell": "7:7-7:11|0|1|2",
      "extent": "7:1-7:29|0|1|0",
      "alias_of": 16750616846959666305,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": []
    }, {
      "usr": 4481210672785600703,
      "detailed_name": "enum Foo3 {}",
      "qual_name_offset": 5,
      "short_name": "Foo3",
      "kind": 10,
      "declarations": [],
      "spell": "15:6-15:10|0|1|2",
      "extent": "15:1-15:22|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": []
    }, {
      "usr": 8420119006782424779,
      "detailed_name": "struct Base {}",
      "qual_name_offset": 7,
      "short_name": "Base",
      "kind": 23,
      "declarations": [],
      "spell": "3:8-3:12|0|1|2",
      "extent": "3:1-3:15|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [16750616846959666305],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["5:26-5:30|16750616846959666305|2|2052"]
    }, {
      "usr": 16750616846959666305,
      "detailed_name": "struct SameFileDerived : Base {}",
      "qual_name_offset": 7,
      "short_name": "SameFileDerived",
      "kind": 23,
      "declarations": [],
      "spell": "5:8-5:23|0|1|2",
      "extent": "5:1-5:33|0|1|0",
      "alias_of": 0,
      "bases": [8420119006782424779],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["7:14-7:29|0|1|4"]
    }],
  "usr2var": [{
      "usr": 2638219001294786365,
      "detailed_name": "int Foo4",
      "qual_name_offset": 4,
      "short_name": "Foo4",
      "declarations": [],
      "spell": "17:5-17:9|0|1|2",
      "extent": "17:1-17:9|0|1|0",
      "type": 53,
      "uses": [],
      "kind": 13,
      "storage": 0
    }, {
      "usr": 6141718166919284735,
      "detailed_name": "A",
      "qual_name_offset": 0,
      "short_name": "A",
      "hover": "A = 0",
      "declarations": [],
      "spell": "15:13-15:14|4481210672785600703|2|1026",
      "extent": "15:13-15:14|4481210672785600703|2|0",
      "type": 0,
      "uses": [],
      "kind": 22,
      "storage": 0
    }, {
      "usr": 7285646116511901840,
      "detailed_name": "C",
      "qual_name_offset": 0,
      "short_name": "C",
      "hover": "C = 2",
      "declarations": [],
      "spell": "15:19-15:20|4481210672785600703|2|1026",
      "extent": "15:19-15:20|4481210672785600703|2|0",
      "type": 0,
      "uses": [],
      "kind": 22,
      "storage": 0
    }, {
      "usr": 8395885290297540138,
      "detailed_name": "static int Foo5",
      "qual_name_offset": 11,
      "short_name": "Foo5",
      "declarations": [],
      "spell": "18:12-18:16|0|1|2",
      "extent": "18:1-18:16|0|1|0",
      "type": 53,
      "uses": [],
      "kind": 13,
      "storage": 2
    }, {
      "usr": 17716334512218775320,
      "detailed_name": "B",
      "qual_name_offset": 0,
      "short_name": "B",
      "hover": "B = 1",
      "declarations": [],
      "spell": "15:16-15:17|4481210672785600703|2|1026",
      "extent": "15:16-15:17|4481210672785600703|2|0",
      "type": 0,
      "uses": [],
      "kind": 22,
      "storage": 0
    }]
}
OUTPUT: impl.cc
{
  "includes": [{
      "line": 0,
      "resolved_path": "&header.h"
    }],
  "skipped_ranges": [],
  "usr2func": [{
      "usr": 5817708529036841195,
      "detailed_name": "void Impl()",
      "qual_name_offset": 5,
      "short_name": "Impl",
      "kind": 12,
      "storage": 0,
      "declarations": [],
      "spell": "3:6-3:10|0|1|2",
      "extent": "3:1-5:2|0|1|0",
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": ["4:3-4:7|11650481237659640387|3|16420"]
    }, {
      "usr": 11650481237659640387,
      "detailed_name": "template<> void Foo1<int>()",
      "qual_name_offset": 16,
      "short_name": "Foo1",
      "kind": 12,
      "storage": 0,
      "declarations": [],
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": ["4:3-4:7|5817708529036841195|3|16420"],
      "callees": []
    }],
  "usr2type": [],
  "usr2var": []
}
*/
