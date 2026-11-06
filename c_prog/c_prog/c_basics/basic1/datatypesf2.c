#include <stdio.h>

int main() {
    // char
    signed char a = -100;
    unsigned char b = 200;
    printf("%hhd\n", a);
    printf("%hhu\n", b);

    // short int
    signed short int c = -12345;
    unsigned short int d = 54321;
    printf("%hd\n", c);
    printf("%hu\n", d);

    // int
    signed int e = -123456;
    unsigned int f = 123456;
    printf("%d\n", e);
    printf("%u\n", f);

    // long int
    signed long int g = -123456789L;
    unsigned long int h = 123456789UL;
    printf("%ld\n", g);
    printf("%lu\n", h);

    // long long int
    signed long long int i = -123456789012345LL;
    unsigned long long int j = 123456789012345ULL;
    printf("%lld\n", i);
    printf("%llu\n", j);

    // float
    float k = 3.14159f;
    printf("%f\n", k);

    // double
    double l = 2.718281828;
    printf("%lf\n", l);

    // long double
    long double m = 1.61803398875L;
    printf("%Lf\n", m);

    return 0;
}

