// Position in array
// 배열 속 요소 위치 찾기
// 첫 번째 요소의 주소와 자료형의 크기를 알면 다음 요소의 주소를 알아낼 수 있다.
// 배열이 int 형일 때,
// 두 번째 요소 주소 = 첫 번째 요소 주소 + int 자료형의 크기(byte)
// 세 번째 요소 주소 = 두 번째 요소 주소 + int 자료형의 크기(byte)

#include <stdio.h>

void print_next_address(int array[]);

int main(void)
{
    int array[] = { 9, 1, 4, 6 };

    print_next_address(array);
}

void print_next_address(int array[])
{
    int* pointer = array;

    printf("%p\n", pointer); // 0x16d08f450
    printf("%p\n", pointer + sizeof(int)); // 0x16d08f460
    printf("%p\n", &array[4]); // 0x16d08f460

    // n에 대하여 배열의 n번째 요소와 포인터 첫 주소 + n byte 의 주소값은 같다.
    // 포인터에 정수 n을 더하거나 빼면 언제나 "sizeof(자료형) * n" 만큼 메모리 주소를 이동한다.
    printf("%p\n", pointer + 3); // 0x16d08f45c
    printf("%p\n", &array[3]); // 0x16d08f45c
}