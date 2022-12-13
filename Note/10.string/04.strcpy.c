// String copy

#include <stdio.h>

void ft_strcpy(char* dest, const char* src);

int main(void)
{
    char dest[5];
    const char* src = "Hello world";

    ft_strcpy(dest, src);

    printf("%s\n", dest);
}

void ft_strcpy(char* dest, const char* src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest ++;
        src ++;
    }
    *dest = '\0';
}