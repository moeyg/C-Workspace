// Function (함수)
// C 언어의 함수는 기본적으로 모두 전역 함수 -> 제한할 수 있는 키워드는 존재
// C 언어는 언제나 코드를 위에서 아래로 읽기 때문에 함수 정의가 등장 전 함수를 호출하면, 컴파일러가 다음과 같이 가정한다.
// 1. 반환형은 int
// 2. 그 매개변수는 아무거나 올 수 있다.
// 따라서 나중에 컴파일러가 int가 아닌 다른 것을 반환하는 함수를 찾으면 컴파일 오류 발생

#include <stdio.h>

// Prototyping, Function declaration
void greeting(void);

int main() 
{
    greeting();
    greeting();
    greeting();
}

// Function definition
void greeting(void) 
{
    printf("Hello World!\n");

    return;
}