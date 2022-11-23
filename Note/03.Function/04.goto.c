// goto 문
// C 는 위에서 아래에서 순차적으로 코드를 실행하지만, goto를 쓰면 이 순서를 어기고 같은 함수 내에 있는 레이블로 점프해 코드를 실행하도록 지정 가능
// goto <label_name>;
// ...
// <label_name>:

#include <stdio.h>

void find_number(int arr[3][3], const int n);

int main(void)
{
    int square_matrix[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    find_number(square_matrix, 0);
    /*
    0 found in square_matrix.
    Number: 0
    Index positions: (0, 0)
    */
    find_number(square_matrix, -1);
    /*
    -1 found in default_matrix.
    Number: -1
    Index positions: (1, 2)
    */

    return 0;
}

void find_number(int arr[3][3], const int n)
{
    size_t i;
    size_t j;
    int default_matrix[4][4] = {
        {4, 1, 3, 1},
        {9, 2, -1, 6},
        {6, 0, 10, 5},
        {1, 2, 3, 3},
    };

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if (arr[i][j] == n)
            {
                printf("%d found in square_matrix.\n", n);
                goto found;
            }
        }
    }

    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            if (default_matrix[i][j] == n)
            {
                printf("%d found in default_matrix.\n", n);
                goto found;
            }
        }
    }

    found:
        printf("Number: %d\n", n);
        printf("Index positions: (%zu, %zu)\n", i, j);
}