// String concatenation
// 문자열 합치기 : src의 문자열을 dest 뒤에 덧붙이는 함수
// dest의 '\0' 문자가 들어있는 위치부터 src 문자열 추가
// dest의 길이가 충분하지 않은 채 src를 덧붙여 쓸 경우 정의되지 않은 결과가 발생할 수 있다.

#include <stdio.h>
#include <string.h>

char* strcat_func(char* dest, const char* src);

int main(void)
{
    char dest[11] = "Hello ";
    const char* src = "world";

    printf("%s\n", strcat_func(dest, src));
    printf("%s\n", strcat(dest, src));

    return 0;
}

char* strcat_func(char* dest, const char* src)
{
    while (*dest != '\0')
    {
        dest ++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        dest ++;
        src ++;
    }
    *dest = '\0';

    return dest;
}
