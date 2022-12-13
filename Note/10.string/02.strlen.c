// String length

#include <stdio.h>

size_t ft_strlen(char const *str);

int main(void)
{
    char str[] = "Hello world";
    
    printf("str length is %lu\n", ft_strlen(str)); // str length is 11

    return 0;
}

size_t ft_strlen(char const *str)
{
    size_t length = 0;

    while (*str != '\0')
    {
        length ++;
        str ++;
    }

    return length;
}