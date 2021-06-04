# FastRand
Simple library for fast generation of pseudo-random 16-, 32- and 64-bit numbers with large interval.

### Example:
```c
RGen g = NewRGen(getpid());

Next16(&g);
Next32(&g);
Next64(&g);
```
