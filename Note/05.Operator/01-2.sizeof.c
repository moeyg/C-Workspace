// sizeof()
// 배열의 경우, 함수 인자로 받을 경우 다른 결과가 나온다.

#include <stdio.h>

size_t get_char_array_size(char data[])
{
    return sizeof(*data);
}

int main(void)
{
    char char_array[42];

    size_t size_array = sizeof(char_array); // 42
    size_t size_array_by_func = get_char_array_size(char_array); // 1

    return 0;
}