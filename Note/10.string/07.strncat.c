// String number concatenation
// 최대 count 개만큼 src 문자열을 dest 뒤에 덧붗이는 함수
// count 개의 문자를 복사한 뒤, '\0' 문자를 가장 마지막에 붙여준다. 따라서, 최대 count + 1 개의 문자를 덧붙여 쓴다.
// 만약 dest 길이가 충분하지 않은 채 src를 덧붙여 쓸 경우 dest의 범위가 아닌 곳에 덮어쓴 후 마지막에 '\0' 을 붙인다.

#include <stdio.h>
#include <string.h>

char* strncat_func(char* dest, const char* src, size_t count);

int main(void)
{
    char dest[11] = "Hello ";
    const char* src = "world";

    printf("%s\n", strncat_func(dest, src, 3));
    printf("%s\n", strncat(dest, src, 3));

    return 0;
}

char* strncat_func(char* dest, const char* src, size_t count)
{
    size_t length = 0;
    size_t index = 0;

    while (dest[length] != '\0')
    {
        length ++;
    }
    while (index < count && src[index] != '\0')
    {
        dest[length + index] = src[index];
        index ++;
    }
    dest[length + index] = '\0';

    return (dest);
}