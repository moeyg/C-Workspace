// C style string
// 문자열이 끝나는 위치를 '\0' null character 로 표시

#include <stdio.h>

int main(void)
{
    char str1[] = "Hello world";
    // string 은 배열에 하나씩 요소로 'H', 'e', 'l' ... 이 들어있고 마지막에 '\0' 문자를 붙인다.

    // 자동으로 '\0' 이 붙는다.
    char str2[] = "string"; // 스택에 'string' 저장 -> 스택에서 카피해 값을 바꾸려 할 때 사용하는 것을 권장
    char* str3 = "string"; // 데이터 섹션에 'string' 저장 -> 바꾸지 않을 때 사용하는 것을 권장

    // 단, 이 경우에는 '\0' 을 넣어주지 않는다.
    char str4[] = { 'a', 'b', 'c' };

    char str[] = "Hello";
    printf("str length is %ld\n", sizeof(str)); // str length is 6

    return 0;
}