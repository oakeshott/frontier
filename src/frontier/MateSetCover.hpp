//
// MateSetCover.hpp
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

#ifndef MATESETCOVER_HPP
#define MATESETCOVER_HPP

#include "MateSetPartition.hpp"

namespace frontier_dd {

//*************************************************************************************************
// StateSetCover: 集合被覆のための State
class StateSetCover : public StateSetPartition {
public:
    StateSetCover(HyperGraph* graph);
    virtual ~StateSetCover();
};

//*************************************************************************************************
// MateSetCover
class MateSetCover : public MateSetPartition {
public:
    MateSetCover(State* state) : MateSetPartition(state) {}
    virtual ~MateSetCover() {}

    virtual int CheckTerminalPre(State* state, int child_num);
};

} // the end of the namespace

#endif // MATESETCOVER_HPP
