# FastRand
Simple library for fast generation of pseudo-random 16-, 32- and 64-bit numbers with large interval.

Generator structure
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

Generator constructor
```c
NewRGen(uint64_t);
```

16-bit random function
```c
Next16(struct RandomGenerator*)
```

32-bit random function
```c
Next32(struct RandomGenerator*)
```

64-bit random function
```c
Next32(struct RandomGenerator*)
```
