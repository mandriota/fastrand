# FastRand
Simple library for fast generation of pseudo-random 16-, 32- and 64-bit numbers with large interval.

### Generator structure
```c
union RandomGenerator {
    uint_fast16_t n16;
    uint_fast32_t n32;
    uint_fast64_t n64;
};
```
defined as `RGen`

### Generator constructor
```c
RGen NewRGen(uint64_t);
```

### 16-bit random function
```c
uint16_t Next16(RGen *)
```
**Interval: 2 pow 16 / 2 pow 16**

### 32-bit random function
```c
uint32_t Next32(RGen *)
```
**Interval: 3511416960 / 2 pow 32**

### 64-bit random function
```c
uint64_t Next64(RGen *)
```
**Interval: ? / 2 pow 64**
