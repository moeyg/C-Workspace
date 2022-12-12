// Operator priority
// 포인터와 연산자 우선 순위 및 결합 법칙
#include <stdio.h>

int main(void)
{
    int nums[] = { 134, 68, 47956 };
    int* pointer = nums;
    int num;

    // 1. ++(후위 연산) : 연산자 결합법칙 ->
    // 2. *(역참조), ++(전위 연산) : 연산자 결합법칙 <-

    num = *pointer++;
    // int num = *(pointer++); 와 같다.
    // 포인터에 ++ 연산
    // 후위 연산은 평가 후 연산 실행
    // 따라서 pointer의 값은 0x104 -> 134 이고, 134를 num에 대입 후, 포인터 위치에 후위 연산되어 pointer는 0x108 -> 68로 증가
    // 따라서 pointer == 68, num == 134
    printf("*pointer : %d\n", *pointer); // *pointer : 68
    printf("num : %d\n", num); // num : 134

    num = *++pointer;
    // 역참조와 전위 연산이 우선 순위가 같으므로 연산자 결합법칙에 따라 <- 로 합친다.
    // int num = *(++pointer); 와 같다.
    // 포인터에 ++ 연산
    // 전위 연산은 연산 실행 후 평가
    // 따라서 pointer의 값은 0x104에서 ++ 되어 0x108 -> 68 이고, 68을 num에 대입
    // 따라서 pointer == 68, num == 68
    printf("*pointer : %d\n", *pointer); // *pointer : 68
    printf("num : %d\n", num); // num : 68

    num = ++*pointer;
    // 역참조와 전위 연산이 우선 순위가 같으므로 연산자 결합법칙에 따라 <- 로 합친다.
    // int num = ++(*pointer); 와 같다.
    // 값에 ++ 연산
    // 따라서 pointer의 값은 0x104 -> 134 이고, 전위 연산 ++로 135를 pointer와 num에 대입
    // 따라서 poinetr == 135, num == 135
    printf("*pointer : %d\n", *pointer); // *pointer : 135
    printf("num : %d\n", num); // num : 135

    num = (*pointer)++;
    // 괄호가 있어 우선 순위가 정해짐
    // 값에 ++ 연산
    // 따라서 pointer의 값은 0x104 -> 134이고, num에 134를 대입한 후 후위 연산으로 ++ 되어 pointer가 가리키는 값은 135
    // 따라서 pointer == 135, num == 134
    printf("*pointer : %d\n", *pointer); // *pointer : 135
    printf("num : %d\n", num); // num : 134

    return 0;
}