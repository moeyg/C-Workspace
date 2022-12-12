// 2D 배열을 배열의 배열로 바꾸기

#include <stdio.h>

int main(void)
{
    const int array_nums[3][5] = {
        { 30, 40, 50, 60, 70 },
        { 22, 66, 44, 99, 11 }, 
        { 31, 45, 23, 60, 45 }
    };
    // 포인터 배열
    const int* pointer_nums[3];

    // 배열을 포인터에 대입할 수 있으므로 array_nums의 행들을 pointer_nums의 요소에 대입할 수 있다.
    pointer_nums[0] = array_nums[0];
    pointer_nums[1] = array_nums[1];
    pointer_nums[2] = array_nums[2];

    // 각 행의 주소를 출력해보면 20 byte(5 * 4 byte) 씩 떨어져 있다.
    printf("array_nums[0] address : %p\n", (void*)array_nums[0]); // 0x16d41742c
    printf("array_nums[1] address : %p\n", (void*)array_nums[1]); // 0x16d417440
    printf("array_nums[2] address : %p\n", (void*)array_nums[2]); // 0x16d417454

    // 배열 요소의 offset - 각 배열의 요소 개수만큼 offset
    printf("array_nums[2]'s offset from array_nums[0] : %ld\n", array_nums[2] - array_nums[0]); // 10
    printf("array_nums[1]'s offset from array_nums[0] : %ld\n", array_nums[1] - array_nums[0]); // 5
    
    // 각 행의 주소를 출력해보면 2 byte 씩 떨어져 있다. = 주소가 2 byte 사용하기 때문
    printf("pointer_nums[0] address : %p\n", &pointer_nums[0]); // 0x16d03f410
    printf("pointer_nums[1] address : %p\n", &pointer_nums[1]); // 0x16d03f418
    printf("pointer_nums[2] address : %p\n", &pointer_nums[2]); // 0x16d03f420

    // 포인터 배열 요소의 offset - 데이터가 저장되어 있는게 아니라 주소만 저장되어 있기 때문에 1씩 offset
    printf("pointer_nums[2]'s offset from pointer_nums[0] : %ld\n", &pointer_nums[2] - &pointer_nums[0]); // 2
    printf("pointer_nums[1]'s offset from pointer_nums[0] : %ld\n", &pointer_nums[1] - &pointer_nums[0]); // 1

    return 0;
}