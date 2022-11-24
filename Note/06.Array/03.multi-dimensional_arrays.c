// Multi dimensional Arrays (다차원 배열)

int main(void)
{
    // Multi-dimensional Arrays
    int buffer[2][3];

    for (int x = 0; x < 2; ++x)
    {
        for (int y = 0; y < 3; ++y)
        {
            buffer[x][y] = 0;
        }
    }

    // 2차원 배열 -> 1차원 배열
    int array[2 * 3];
    int i;
    int j;

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            array[i * 2 + j] = 0;
        }
    }

    // 2차원 배열 예시
    int grades[2][3] = {
        { 80, 90, 70 },
        { 72, 88, 65 }
    };
    int average = 0;
    int row;
    int col;

    for (row = 0; row < 2; ++row)
    {
        for (col = 0; col < 3; ++col)
        {
            average += grades[row][col];
        }
    }
    average /= (row * col);

    return 0;
}