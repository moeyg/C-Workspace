// Function (함수)
// C 언어의 함수는 기본적으로 모두 전역 함수 -> 제한할 수 있는 키워드는 존재
// C 언어는 언제나 코드를 위에서 아래로 읽기 때문에 함수 정의가 등장 전 함수를 호출하면, 컴파일러가 다음과 같이 가정한다. (C89/90 기준)
// 1. 반환형은 int (C99 표준부터는 int 가정을 하지 않음)
// 2. 그 매개변수는 아무거나 올 수 있다.
// 따라서 나중에 컴파일러가 int가 아닌 다른 것을 반환하는 함수를 찾으면 컴파일 오류 발생

#include <stdio.h>

// Prototyping, Function declaration, Forward declaration
// 함수의 구현체 없이 함수 원형(함수 이름, 반환형, 매개변수 자료형)만 선언
// 컴파일 링크 단계에서 실제 코드 위치를 찾아 메꿔준다.
// 보통은 파일의 제일 위에 선언하거나 헤더 파일에 선언한다.
void foo(void);

int main() 
{
    foo();
    foo();
    foo();

    return 0;
}

// Function definition
void foo(void) 
{
    printf("Hello World!\n");

    return;
}
