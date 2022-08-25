#include <stdio.h>

int main()
{
    // initialization
    int num = 0;

    // scan formatted
    scanf("%i",&num); // & : ampersand (주소값)
    printf("The number is %i\n", num);
    printf("%p", &num); // 0x16af8f498

    return 0;
}