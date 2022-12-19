// sprintf()
// char 배열 출력에 사용
// C++ 에서는 string 클래스가 있어도 sprintf() 를 더 많이 사용한다. -> 속도가 빠르다.
// 다만 사용 시 충분히 큰 버퍼를 잡아주지 않으면 위험하다. -> 길이를 지정해 주지 않기 때문

// int sprintf(char* buffer, const char* format, ...);

#include <stdio.h>

int main(void)
{
    // 만약 buffer가 담을 내용보다 적게 메모리를 잡는다면 원하지 않는 메모리에 덮어쓸 수 있다.
    char buffer[20];
    const char* name = "moeyg";
    int score = 100;

    // 버퍼 배열 안에 값이 들어간다.
    // buffer[0] = 'm', buffer[1] = 'o', buffer[2] = 'e' ... 이런 방식으로 들어간다.
    // 남은 공간에는 쓰레기값이 들어있다.
    sprintf(buffer, "%s : %d", name, score);

    // 화면에 확인하기 위해 printf() 로 buffer 출력
    printf("%s\n", buffer);

    return 0;
}