// Array element access by pointer
// 포인터로 배열 요소 접근하기

#include <stdio.h>

int main(void)
{
    int nums[] = { 5, 2, 6, 7, 8 };
    int* pointer = nums;

    printf("%d\n", nums[3]); // 7
    printf("%d\n", *(pointer + 3)); // 7
    printf("%d\n", pointer[3]); // 7
    // 배열의 첨자 연산자[] 도 포인터에 쓸 수 있다.
    // nums[3] == pointer[3] == *(pointer + 3)
}