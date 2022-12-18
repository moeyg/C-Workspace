// printf()

#include <stdio.h>

int main()
{
    int num = 42;
    const char* str = "C programing";

    // printf()의 첫 번째 매개변수는 문자열을 받는다.
    // printf()는 일반 문자열 혹은 서식 문자열을 매개변수로 받는다.
    // 서식 문자열 : %로 시작하는 문자열, 소수점 이하 자리수, 자릿수 정렬, 어떤 데이터를 출력할지 등을 알려주는 문자열
    printf("Hello world!"); // 일반 문자열 컴파일
    printf("%d\n", num); // 서식 문자열 컴파일
    printf(str); // 컴파일

    printf(num); // 컴파일 오류 -> 변수만 사용할 수 없음

    return 0;
}