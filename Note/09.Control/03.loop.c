// for / while (반복문)

#include <stdio.h>
int main(void)
{
    size_t index = 0;
    int num = 0;
    int for_result = 0;
    int while_result = 0;

    // for loop
    for (index = 0; index < 10; ++index)
    {
        for_result += index;
    }
    printf("for_result : %d\n", for_result); // for_result : 45

    // while loop
    index = 0;
    while (index < 10)
    {
        while_result += index;
        index ++;
        if (while_result > 40)
            // 반복문 실행 중 탈출하려면 break 사용
            break;
    }
    printf("while_result : %d\n", while_result); // while_result : 45

    // continue
    while (num < 5)
    {
        if (num == 3)
        {
            num ++;
            printf("continue\n");
            // 다음 회차로 건너뛰기 위해 continue
            continue;
        }
        printf("num is %d\n", num);
        num ++;
    }
    /* Output value */
    // num is 0
    // num is 1
    // num is 2
    // continue
    // num is 4

    return 0;
}