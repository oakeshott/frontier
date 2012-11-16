//
// ZDDNode.hpp
//
// Copyright (c) 2012 Jun Kawahara
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef ZDDNODE_HPP
#define ZDDNODE_HPP

#include "Global.hpp"

namespace frontier_dd {

//*************************************************************************************************
// ZDDNode: ZDDのノードを表す共用体
// 共用体にしている理由はメモリ使用量効率化のため（であるが、
// この部分は未検討のため dummy1 と dummy2 を置いている。）
union ZDDNode {
public:
    struct {
        intx dummy1;
        intx dummy2;
        intx id;
        intx pos;
    } p;
    struct {
        intx lo;
        intx hi;
    } n;
};

} // the end of the namespace

#endif // ZDDNODE_HPP
