// Pointer size
// 모든 포인터는 동일한 크기를 같는다.
// 보통 CPU가 한 번에 처리할 수 있는 데이터의 크기와 동일함
// 32 bit 아키텍쳐에서 포인터 크기는 4 byte, 64 bit 아키텍쳐에서 포인터 크기는 8 byte

#include <stdio.h>

void print_pointer_size();
void print_array_size(int array[]);
void compare_pointer_array(int array[], int* pointer, int* ptr);

int main(void)
{
    int array[4];
    int* pointer = NULL;
    int* ptr = NULL;

    // 포인터에 배열의 시작 주소를 넣고 싶으면 배열의 이름만 넣어준다.
    pointer = array; // 첫 번째 주소를 포인터에 저장
    ptr = &array[0]; // 위와 같은 말로 첫 번째 주소를 포인터에 저장

    print_pointer_size();
    print_array_size(array);
    compare_pointer_array(array, pointer, ptr);

    return 0;
}

void print_pointer_size()
{
    char c = 'c';
    int i = 42;
    float pi = 3.14f;

    char* char_pointer = &c;
    int* int_pointer = &i;
    float* float_pointer = &pi;

    printf("char size : %lu, char* size : %lu\n", sizeof(*char_pointer), sizeof(char_pointer)); // char size : 1, char* size : 8
    printf("int size : %lu, int* size : %lu\n", sizeof(*int_pointer), sizeof(int_pointer)); // int size : 4, int* size : 8
    printf("float size : %lu, float* size : %lu\n", sizeof(*float_pointer), sizeof(float_pointer)); // float size : 4, float* size : 8
}

void print_array_size(int array[])
{
    size_t array_size = sizeof(*array);

    printf("array size : %zu\n", array_size); // array size : 4
    printf("array address : %p\n", array); // array address : 0x16f26b458
}

// 매개변수로 받은 배열의 크기는 4 byte
// 매개변수로 받은 배열은 배열의 시작 주소를 가지고 있다.
// 매개변수로 받은 포인터의 크기는 4 byte
// 매개변수로 받은 포인터는 포인터의 시작 주소를 가지고 있다.

void compare_pointer_array(int array[], int* pointer, int* ptr)
{
    printf("array address : %p\n", array); // array address : 0x16f26b458
    printf("pointer address : %p\n", pointer); // pointer address : 0x16f26b458
    printf("ptr address : %p\n", ptr); // ptr address : 0x16f26b458
}

// 따라서 pointer = array = &array[0]