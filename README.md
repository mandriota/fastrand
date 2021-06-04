# FastRand
Simple library for fast generation of pseudo-random 16-, 32- and 64-bit numbers with large interval.

### Generator structure
```c
struct RandomGenerator {
    union {
        uint_fast16_t n16;
        uint_fast32_t n32;
        uint_fast64_t n64;
    };
};
```
defined as `RGen`

### Generator constructor
```c
struct RandomGenerator NewRGen(uint64_t);
```

### 16-bit random function
```c
uint16_t Next16(struct RandomGenerator*)
```
**Magic constants: term=`0x2419`; factor=`0x1FFF`; mask=`0x8035`;**
**Interval: 2 pow 16 / 2 pow 16**

### 32-bit random function
```c
uint32_t Next32(struct RandomGenerator*)
```
**Magic constants: term=`0x5170A71`; factor=`0x3FFC001`; mask=`0x40350AF9`;** *(have to replace)*
**Interval: 3511416960 / 2 pow 32**

### 64-bit random function
```c
uint64_t Next64(struct RandomGenerator*)
```
**Magic constants: term=`0xB7BCB7E909`; factor=`0x7FF4005FFF`; mask=`0x2027D077C58D`;** *(have to replace)*
**Interval: ?**
