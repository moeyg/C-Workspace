// Length modifier (길이 수정자)
// 인자의 바이트 크기를 지정해 준다.

#include <stdio.h>

int main(void)
{
    long int num = 2147483647;
    long double pi = 3.14;

    // long int
    printf("%ld\n", num);   /* 2147483647 */
    // long double
    printf("%lf\n", pi);    /* 3.140000 */
}