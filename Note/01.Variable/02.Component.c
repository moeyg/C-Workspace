// #include : Preprocessor, 컴파일 전 다른 파일에 소스 코드를 가져와 사용이 가능하게 한다.
// stdio.h : Standard Input and Output Header file (C 표준 라이브러리)
#include <stdio.h>

// int : Return value
// main : Entry point
// (void) : No parameters
// C 코드를 빌드해서 나온 실행 파일(a.exe, a.out)을 실행하면 main(void) 함수부터 진입
int main(void)
{
    // 0 : No problem running
    // Mac OS : echo $?
    // Windows : echo %errorlevel%
    return 0;
}

// void를 생략하면, 매개변수가 없다는 뜻이 아니라 매개변수의 자료형과 개수가 정해지지 않았다는 의미