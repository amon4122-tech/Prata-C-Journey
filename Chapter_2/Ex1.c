#include <stdio.h>
#include <limits.h>
#include <float.h>

int a = INT_MAX;
int b = INT_MIN;
unsigned int c = UINT_MAX;
long d = LONG_MAX;
long e = LONG_MIN;
unsigned long f = ULONG_MAX;
long long g = LLONG_MAX;
long long h = LLONG_MIN;
unsigned long long i = ULLONG_MAX;

int main(void){
    printf("Maximum value of type int: %d. Overflow: %d\n", a, a + 1);
    printf("Minimum value of type int: %d. Overflow: %d\n", b, b - 1);
    printf("Maximum value of type unsigned int: %u. Overflow: %u\n", c, c + 1);
    printf("Maximum value of type long: %ld. Overflow: %ld\n", d, d + 1);
    printf("Minimum value of type long: %ld. Overflow: %ld\n", e, e - 1);
    printf("Maximum value of type unsigned long: %lu. Overflow: %lu\n", f, f + 1);
    printf("Maximum value of type long long: %lld. Overflow: %lld\n", g, g + 1);
    printf("Minimum value of type long long: %lld. Overflow: %lld\n", h, h - 1);
    printf("Maximum value of type unsigned long long: %llu. Overflow: %llu\n", i, i + 1);

    return 0;
}
