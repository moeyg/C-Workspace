// String compare
// 같으면 0
// 좌항이 작으면 < 0
// 좌항이 크면 > 0

#include <stdio.h>

int ft_strcmp(const char* str1, const char* str2);

int main(void)
{
    const char* str1 = "ABCDef";
    const char* str2 = "ABCDEf";
    int result = ft_strcmp(str1, str2);

    printf("%d\n", result); // 32 -> str1 > str2

    return 0;
}

int ft_strcmp(const char* str1, const char* str2)
{
    while (*str1 != '\0' && (*str1 == *str2))
    {
        str1 ++;
        str2 ++;
    }

    return (*str1 - *str2);
}