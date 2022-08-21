#include <stdio.h>

int main() {
    // print formatted
    int num;
    int x, y, z;

    num = 42;

    x = 1;
    y = 2;
    z = x + y;

    printf("The number is %i.", num);
    printf("The number is %d.", num);

    printf("%i + %i = %i", x, y, z);

    return 0;
}