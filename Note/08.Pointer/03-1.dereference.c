// Dereference operator (역참조 연산자)
// 주소에 저장된 값에 접근하는 연산자
// 포인터가 저장하고 있는 메모리 위치로 가서 저장된 값에 접근한다.
// 값에 직접 접근하는 것이 아니기 때문에 간접(indirect) 연산자라고도 한다.

#include <stdio.h>

void print_value(void);
void print_argument(float *argument);

int main(void)
{
    float pi;

    print_value();

    pi = 3.14f;
    print_argument(&pi); // 주소 전달

    return 0;
}

void print_value(void)
{
    int num = 42;
    int* pointer = &num; // 포인터 변수에 주소값 저장

    // 역참조 연산자로 저장된 주소값에 있는 값 출력
    printf("num : %d\n", *pointer); // num : 42
}

void print_argument(float* argument) // 주소를 받는 포인터 변수
{
    printf("argument : %f\n", *argument); // argument : 3.140000
}
