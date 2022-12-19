#include "print_ascii_table.h"

int main(void)
{
    print_ascii_table();

    return 0;
}

void print_ascii_table(void)
{
    // 화면에 출력 가능한 아스키 코드 숫자
    const int MIN_ASCII = 32;
    const int MAX_ASCII = 126;

    // 총 char 개수
    const int NUM_CHARS = MAX_ASCII - MIN_ASCII + 1;
    // 아스키 코드 테이블 열 개수
    const int NUM_COLS = 3;
    // 아스키 코드 테이블 행 개수
    // 마지막 줄은 잘리기 때문에 다른 방법으로 그려주기 위해 -1
    const int NUM_ROWS = (NUM_CHARS + NUM_COLS - 1) / NUM_COLS; 

    int row;
    int ascii_num;

    // 표의 제목 줄
    printf("Dec Hex Char\tDex Hex Char\tDex Hex Char\n");

    // 표의 행을 그리는 반복문
    for (row = 0; row < NUM_ROWS - 1; ++row)
    {
        // 첫 번째 열의 문자 그리기
        ascii_num = MIN_ASCII + row;
        printf("%03d %#X %c\t", ascii_num, ascii_num, ascii_num);

        // 두 번째 열의 문자 그리기
        // 첫 번째 열의 NUM_ROWS 를 더한 만큼 그리면 된다.
        ascii_num += NUM_ROWS;
        printf("%03d %#X %c\t", ascii_num, ascii_num, ascii_num);

        // 세 번째 열의 문자 그리기
        ascii_num += NUM_ROWS;
        printf("%03d %#X %c\t", ascii_num, ascii_num, ascii_num);
    }

    // 표의 마지막 행을 그리는 반복문
    for (ascii_num = MIN_ASCII + row; ascii_num <= MAX_ASCII; ascii_num += NUM_ROWS)
    {
        printf("%03d %#X %c\t", ascii_num, ascii_num, ascii_num);
    }
}