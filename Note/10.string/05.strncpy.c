// String number copy
// src 길이 < count 면 남은 공간을 전부 '\0' 로 채운다.
// src 길이 >= count 면 count 만큼 복사하고 '\0' 을 붙일 공간이 없기 때문에 붙이지 않는다.
// 따라서 strncpy 를 사용할 때는 코드를 한 줄 추가해 준다.
strncpy(dest, src, DEST_SIZE);
dest[DEST_SIZE - 1] = '\0' // 마지막에 '\0' 을 붙여준다.

#include <stdio.h>
#include <string.h>

char* strncpy_func(char* dest, char* src, size_t count);

int main(void)
{
    char* src = "Hi";
    char dest[4];

    printf("%s\n", strncpy_func(dest, src, 4)); // Hi
    printf("%s\n", strncpy(dest, src, 4)); // Hi

    return 0;
}

char* strncpy_func(char* dest, char* src, size_t count)
{
    size_t index = 0;

    while (src[index] != '\0' && index < count)
    {
        dest[index] = src[index];
        index ++;
    }
    while (index < count)
    {
        dest[index] = '\0';
        index ++;
    }

    return dest;
}