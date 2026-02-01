#include <sys/random.h>
#include <stdlib.h>

#include"rng.h"

int randombytes(unsigned char *x, unsigned long long xlen){

    getrandom(x, xlen, 0);
    return RNG_SUCCESS;
}