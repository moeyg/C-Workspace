// Difference between pointer and array
// 포인터와 배열의 차이

#include <stdio.h>

int main(void)
{
    int array[4] = { 3, 8, 1, 2 };
    int* pointer = array;

    // 1. sizeof 연산자
    // sizeof(배열) : 배열의 총 크기 반환
    // sizeof(포인터) : 포인터의 크기를 반환 (4 byte)
    printf("array size : %lu\n", sizeof(array)); // array size : 16 (4 * 4)
    printf("pointer size : %lu\n", sizeof(pointer)); // pointer size : 8

    // 2. 문자열 초기화
    // 문자열을 넣으면 배열에 차례로 'c', 'h', ... 'r' 이 들어간 후 마지막에 '\0' (Null character) 가 들어간다.
    // 함수 안에서 사용하면 데이터 섹션에 있는 배열을 복사해서 스택 메모리에 저장한다.
    char c[] = "character";
    // 포인터 변수를 사용하면 데이터 섹션에 있는 배열을 그대로 가져와서 스택 메모리에서 사용한다. 즉, 데이터 섹션에 있는 문자열의 주소값을 스택으로 가져와 사용한다.
    char* ch = "character";
    // 스택에 저장된 문자열은 수정해도 괜찮지만, 데이터 섹션에 저장된 문자열은 수정할 경우 '결과가 정의되지 않음'이 나타난다.
    c[0] = 'g'; // OK
    ch[0] = 'g'; // 결과가 정의되지 않음

    // 3. 대입
    // 포인터 변수에는 다른 주소를 넣을 수 있으나 배열 변수는 불가능

    // 4. 포인터 산술 연산
    // 포인터는 산술 연산이 가능하지만, 배열은 불가능
}