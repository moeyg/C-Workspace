// Address operator & (주소 연산자)
// &variable = variable의 주소를 반환하는 연산자 (= variable이 위치한 메모리 주소)

#include <stdio.h>

void print_address(void);

int main(void)
{
    print_address();

    return 0;
}

void print_address(void)
{
    int num;

    // %p : 서식 문자 p는 주소를 16진수로 보여준다.
    // 실행할 때마다 주소가 달라질 수 있다. -> 보안 강화 목적(ASLR)
    printf("Address of num : %p\n", (void*)&num); // Address of num : 0x16b30344c
}