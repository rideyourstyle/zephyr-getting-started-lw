#include "equal_checker.h"

#include <stdio.h>


bool __attribute__ ((noinline)) isEqual(uint32_t a, const uint32_t b)
{
    a--;
    volatile uint32_t c = a;
    c++;
    volatile bool result = true;
    result = b == c;
    return result;
}



int32_t __attribute__ ((noinline)) doSomeCrazyWork(const int32_t a) {
    volatile uint32_t b = a;
    b--;
    b = b * 33;
    b = b - 33;
    b = b / 32;
    b++;;
    return b;
}

void __attribute__ ((noinline)) printSomeText(uint32_t input) {
    if (input%2 == 0) {
        printf("EQUAL\n");
    }else {
        printf("NOT EQUAL\n");
    }

}
