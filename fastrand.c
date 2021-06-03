#include "fastrand.h"

inline RGen __fastcall NewRGen(uint64_t seed) {
    return (RGen) {.n64 = seed};
}

inline uint16_t __fastcall Next16(RGen * restrict g) {
    const register uint_fast64_t x = 0x2419+g->n16*0x1FFF ^ 0x8035;
    return g->n16 = x>>8 | x<<8;
}

inline uint32_t __fastcall Next32(RGen * restrict g) {
    const register uint_fast32_t x = 0x5170A71+g->n32*0x3FFC001 ^ 0x40350AF9;
    return g->n32 = x>>16 | x<<16;
}

inline uint64_t __fastcall Next64(RGen * restrict g) {
    const register uint_fast64_t x = 0xB7BCB7E909+g->n64*0x7FF4005FFF ^ 0x2027D077C58D;
    return g->n64 = x>>32 | x<<32;
}