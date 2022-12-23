// 문자를 읽을 때 scanf()의 문제점과 해결책

// 문제점
// %s 쓸 때 배열의 크기보다 큰 문자열이 들어오면 버퍼 오버플로
// 다른 자료형을 읽을 때 무한 루프에 빠질 위험이 크다.

// 해결법
// fgets() 와 sscanf() 를 같이 쓰는 방법

#include <stdio.h>
#define STR_LENGTH (1024)
#define LENGTH (5000)

int main(void)
{
    // 문제점 : 무한 루프 예시 코드
    int num;
    int sum = 0;
    char str[STR_LENGTH];

    while (1)
    {
        // 여기서 정수를 넣어야 하는데 문자를 넣을 경우 무한 루프
        // stdin (입력 버퍼)에 문자가 남아있어 무한 루프 발생
        if (scanf("%d", &num) == 0)
        {
            printf("Error\n");
            continue;
        }

        if (num == 0)
        {
            break;
        }

        sum += num;
    }

    // 해결법 : 무한 루프 문제 없이 숫자 읽기 예시
    while (1)
    {
        if (fgets(str, STR_LENGTH, stdin) == NULL)
        {
            clearerr(stdin);
            break;
        }

        if (sscanf(str, "%d", &num) == 1)
        {
            sum += num;
        }
    }

    printf("Sum : %d\n", sum);

    // 버퍼 오버플로 문제 없이 문자열 읽기
    // 매개변수로 보낼 line 과 읽을 word의 길이를 같게 한다.
    char line[LENGTH];
    char word[LENGTH];

    while (1)
    {
        if (fgets(line, LENGTH, stdin) == NULL)
        {
            clearerr(stdin);
            break;
        }

        if (sscanf(line, "%s", word) == 1)
        {
            printf("%s\n", word);
        }
    }
    
    printf("string : %s\n", line);

    return 0;
}

// clearerr() : clear error
// 스트림을 읽거나 EOF를 만나면 그 스트림의 EOF 표시자가 세팅된다. 그 외에 이유로 실패하면 오류 표시자를 세팅한다.
// 오류가 잘 지워지지 않아 다음에 읽거나 쓸 때 실패할 가능성이 있다. 따라서 그 오류를 지워주는 함수이다.
// 표시자의 세팅 여부를 보고 싶다면 feof() 나 ferror() 함수를 사용하면 된다.