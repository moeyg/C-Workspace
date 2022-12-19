#include "whitespace_counter.h"

int main(void)
{
    print_whitespace_stat();

    return 0;
}

// 사용자 입력으로부터 들어오는 공백 문자의 숫자 세는 함수
// whitespace : \n, \t, ' ' 등등
void print_whitespace_stat(void)
{
    int c;
    size_t num_whitespace = 0u;
    size_t num_newlines = 0u;

    c = getchar();
    while (c != EOF)
    {
        // 공백 문자일 경우 개수 세기
        if (isspace(c))
        {
            ++ num_whitespace;
            // 공백 문자가 getchar()로 받는 \n 인 경우 추가
            if (c == '\n')
            {
                ++ num_newlines;
            }
        }

        c = getchar();
    }

    printf("# whitespaces : %zu\n", num_whitespace);
    printf("# new lines : %zu\n", num_newlines);
}