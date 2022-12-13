// String number copy

#include <stdio.h>
#include <string.h>

char* ft_strncpy(char* dest, char* src, size_t count);

int main(void)
{
    char* src = "Hi";
    char dest[4];

    printf("%s\n", ft_strncpy(dest, src, 4)); // Hi
    printf("%s\n", strncpy(dest, src, 4)); // Hi

    return 0;
}

char* ft_strncpy(char* dest, char* src, size_t count)
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