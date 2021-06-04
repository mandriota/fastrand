# FastRand
Simple library for fast generation of pseudo-random 16-, 32- and 64-bit numbers with large interval.

```c
RGen g = NewRGen(getpid());

printf("%02X\n%04X\n%08X\n",
    Next16(&g),
    Next32(&g),
    Next64(&g));
```
