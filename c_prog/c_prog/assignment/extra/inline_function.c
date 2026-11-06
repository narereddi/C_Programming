

#include <stdio.h>

  extern inline int square(int x) {
    return x * x;
}

int main() {
    int a = 5;
    printf("Square = %d\n", square(a));
    return 0;
}

