// Address subtraction
// 주소끼리 뺄셈을 하면 두 주소 사이에 들어있는 데이터 수를 알 수 있다. (offset)
// 따라서 주소끼리 뺄셈을 하면 정수를 반환한다.

#include <stdio.h>

int main(void)
{
    int nums[5] = { 2, 6, 7, 5 };
    int sub;

    sub = &nums[4] - &nums[0];
    printf("%d\n", sub); // 4
}