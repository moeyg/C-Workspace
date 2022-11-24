// Array (배열)

#include <stdio.h>

int main(void)
{
    int grades[5] = { 70, 60, 85, 55, 90 };
    int average = 0;
    int index;

    for (index = 0; index < 5; ++index)
    {
        average += grades[index];
    }
    average /= index;

    printf("Average: %d\n", average); // 72
    
    return 0;
}