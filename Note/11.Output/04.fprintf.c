// fprintf()
// 스트림에 출력

// standard stream (표준 스트림)
// 1. stdout : 콘솔 출력
// 2. stdin : 콘솔 입력
// 3. stderr : 콘솔 에러 출력

// stdout
// C 에서 표준 입출력 스트림 - 모니터
// 1. stdout 은 보통 라인 버퍼링을 사용한다.
// 2. 버퍼링 : 출력할 내용이 있어도 곧바로 출력하지 않고 쌓아두었다가 어느 정도 버퍼가 차면 출력한다.
// 3. 라인 버퍼링 : 버퍼가 꽉 차거나 버퍼에 '\n' 이 들어올 때 버퍼를 비운다.
// 4. 강제로 버퍼를 비우고 싶다면 fflush(stdout); 을 호출하면 된다.

// 버퍼링 종류
// 1. full buffering : 버퍼가 가득 차면 비운다. 라인 버퍼링과 마찬가지로 fflush()로 강제로 비울 수 있다.
// 2. line buffering : 버퍼가 꽉 차거나, 버퍼에 '\n' 이 들어오면 버퍼를 비운다.
// 3. no buffering : 버퍼를 사용하지 않는다.
// 표준에서 stdout, stderr, stdin의 버퍼링 종류를 지정하지 않고 구현에 따라 다를 수 있다.

#include <stdio.h>

int main(void)
{
    // 모든 출력 스트림에 fprintf() 사용 가능
    // 첫 인자로 들어가는 스트림만 달라지고 나머지는 매개변수 그대로 사용
    // 파일 스트림은 존재, 문자열 스트림은 없다. -> 대신 sprintf() 존재
    fprintf(stdout, "Hello world\n");
    fprintf(stderr, "Error\n");

    return 0;
}
