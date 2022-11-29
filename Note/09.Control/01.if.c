// if (조건문)
// if 문에서 (조건)은 '0(거짓)' 또는 '1(참)'로 반환되어 블록을 실행



#include <stdio.h>

int main(void)
{
    int int_value = 42;
    float float_value = 0.0f;

    if (int_value >= 0)
    {
        printf("%d is positive number\n", int_value); // print
    }
    else
    {
        printf("%d is negative number\n", int_value);
    }

    if (float_value)
    {
        printf("%f is positivefloat\n", float_value);
    }
    else
    {
        printf("%f is negativefloat\n", float_value); // print
    }

    return 0;
}