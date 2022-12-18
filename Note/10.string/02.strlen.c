// String length

#include <stdio.h>

size_t strlen_func(char const *str);

int main(void)
{
    char str[] = "Hello world";
    
    printf("str length is %lu\n", strlen_func(str)); // str length is 11

    return 0;
}

size_t strlen_func(char const *str)
{
    size_t length = 0;

    while (*str != '\0')
    {
        length ++;
        str ++;
    }

    return length;
}