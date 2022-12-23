#include "match_history_io.h"

// #define 하면 요소 대입법으로 여러 배열들을 초기화할 때 요소 수가 일치하지 않는 실수를 방지할 수 있다.
#define MATCH_COUNT (5)
#define NUM_CHAMPS (5)

#define BUFFER_SIZE (4096)

int main(void)
{
    // 챔피언들의 게임 전적을 포맷해서 문자열 버퍼에 작성
    const char* names[NUM_CHAMPS] = {
        "Akali",
        "Sylas",
        "Yasuo",
        "Leblanc",
        "Aatrox"
    };

    // 각 챔피언들의 순서대로 승패수
    const int wins[NUM_CHAMPS] = {
        52, 55, 28, 34, 32
    };
    const int losses[NUM_CHAMPS] = {
        62, 38, 31, 21, 21
    };

    // 각 챔피언들의 평균 Kill, Death, Assist 수
    const float average_kills[NUM_CHAMPS] = {
        6.11f, 6.62f, 4.81f, 5.95f, 5.19f
    };
    const float average_deaths[NUM_CHAMPS] = {
        3.65f, 3.87f, 3.97f, 3.05f, 3.23f
    };
    const float average_assists[NUM_CHAMPS] = {
        4.63f, 6.68f, 4.47f, 5.25f, 6.02f
    };

    // 모든 게임 전적을 문자열 버퍼 하나에 저장하기 위해 buffer 선언 
    // -> 개념 상 한 파일에 저장하는 것과 같다고 생각
    char buffer[BUFFER_SIZE];

    // BUFFER_SIZE 도 매개변수로 전달해서 이 함수가 buffer 범위를 넘어서 쓰는 경우를 방지
    write_match_history(buffer, BUFFER_SIZE, names, wins, losses, average_kills, average_deaths, average_assists, NUM_CHAMPS);

    // 문자열 buffer 에서 전적을 읽은 후 간략한 계산 몇 개를 한 뒤, 그 모든 결과를 콘솔창에 보여주는 함수
    read_match_history(buffer);

    return 0;
}