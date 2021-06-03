// Copyright 2021 Mark Mandriota. All rights reserved.
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file.
// =====================================================
#include <inttypes.h>

typedef struct RandomGenerator {
    union {
        uint_fast16_t n16;
        uint_fast32_t n32;
        uint_fast64_t n64;
    };
} RGen;

RGen __fastcall NewRGen(uint64_t);

uint16_t __fastcall Next16(RGen *);
uint32_t __fastcall Next32(RGen *);
uint64_t __fastcall Next64(RGen *);