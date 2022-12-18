// String copy
// dest가 src 보다 길이가 짧으면 src의 내용을 덮어쓰기 위해 소유하지 않은 메모리에 덮어쓴다.

#include <stdio.h>

void strcpy_func(char* dest, const char* src);

int main(void)
{
    char dest[5];
    const char* src = "Hello world";

    strcpy_func(dest, src);

    printf("%s\n", dest);
}

void strcpy_func(char* dest, const char* src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest ++;
        src ++;
    }
    *dest = '\0';
}