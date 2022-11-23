// sizeof()
// 피연산자의 크기를 byte 로 반환해주는 연산자 (함수 X)
// 실행 중이 아니라 컴파일 도중에 크기를 찾는다. -> 컴파일 할 때 모르는 크기는 찾아줄 수 없다.
// byte 의 크기는 char와 같기 때문에 sizeof(char)는 반드시 1이 반환된다.
// sizeof() 연산자가 반환하는 값은 부호 없는 정수형의 상수로 size_t 형

#include <stdio.h>

int main(void)
{
    char character = 'c';
    char array[42];
    int integer = 42;
    
    size_t size_char = sizeof(character);
    size_t size_array = sizeof(array);
    size_t size_int = sizeof(integer);
    size_t size_float = sizeof(float);

    printf("%zu\n", size_char); // 1
    printf("%zu\n", size_array); // 42
    printf("%zu\n", size_int); // 4
    printf("%zu\n", size_float); // 4

    return 0;
}