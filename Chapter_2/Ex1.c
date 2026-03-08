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
    printf("Максимальное значение типа int: %d. Переполнение: %d\n", a, a + 1);
    printf("Минимальное значение типа int: %d. Переполнение: %d\n", b, b - 1);
    printf("Максимальное значение типа unsigned int: %u. Переполнение: %u\n", c, c + 1);
    printf("Максимальное значение типа long: %ld. Переполнение: %ld\n", d, d + 1);
    printf("Минимальное значение типа long: %ld. Переполнение: %ld\n", e, e - 1);
    printf("Максимальное значение типа unsigned long: %lu. Переполнение: %lu\n", f, f + 1);
    printf("Максимальное значение типа long long: %lld. Переполнение: %lld\n", g, g + 1);
    printf("Минимальное значение типа long long: %lld. Переполнение: %lld\n", h, h - 1);
    printf("Максимальное значение типа unsigned long long: %llu. Переполнение: %llu\n", i, i + 1);

    return 0;
}
