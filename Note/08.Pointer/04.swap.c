// swap()

#include <stdio.h>

void swap(int* num1, int* num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(void)
{
    int num1 = 4;
    int num2 = 2;

    // Before swap
    printf("num1 = %d, num2 = %d\n",num1, num2); // num1 = 4, num2 = 2
    // swap
    swap(&num1, &num2);
    // After swap
    printf("num1 = %d, num2 = %d\n", num1, num2); // num1 = 2, num2 = 4

    return 0;
}
