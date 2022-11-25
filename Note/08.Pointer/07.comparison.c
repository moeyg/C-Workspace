// Pointer comparison (포인터 비교)

// 주소를 비교하는 코드

#include <stdio.h>

void address_comparison(int* x, int* y)
{
    if (x == y) // 주소를 비교하는 코드
    {
        printf("x adress == y address");
    }
    if (x != y)
    {
        printf("x address : %p\ny address: %p\n", x, y);
        // x address : 0x16f417468
        // y address: 0x16f417464
    }
}

// 값을 비교하는 코드
void value_comparison(int* x, int* y)
{
    if (*x == *y)
    {
        printf("x value == y value");
    }
    if (*x != *y)
    {
        printf("x value : %d\ny value : %d\n", *x, *y);
        // x value : 10
        // y value : 20
    }
}

int main(void)
{
    int x = 10;
    int y = 20;
    int* x_pointer = &x;
    int* y_pointer = &y;

    address_comparison(x_pointer, y_pointer);
    value_comparison(x_pointer, y_pointer);

    return 0;
}