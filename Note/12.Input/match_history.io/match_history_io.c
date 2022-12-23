// 윈도우에서 clang을 사용하면 파일 및 문자열 관련 함수를 사용할 때마다 그 대신 _s가 달린 함수를 사용하라는 컴파일러 경고가 나온다.
// 경고를 끄기 위해 정의할 수 있다.
#define _CRT_SECURE_NO_WARNINGS

#include "match_history_io.h"

#define LINE_LENGTH (4096)

void write_match_history(char* buffer, size_t buffer_size, const char* names[], const int wins[], const int losses[], const float kills[], const float deaths[], const float assists[], size_t num_champs)
{
    // 한 줄에 한 챔피언의 전적을 저장할 수 있도록 라인 길이를 충분히 잡는다.
    char line[LINE_LENGTH];
    size_t i;
    // 아직 버퍼 속에 남아있는 공간을 기억해서 버퍼 오버플로 방지
    size_t remaining_buffer_size;

    // 마지막 '\0' 을 넣을 공간 확보를 위해 -1
    remaining_buffer_size = buffer_size - 1;
    // buffer 빈 문자열로 만듦
    buffer[0] = '\0';

    for (i = 0; i < num_champs; ++i)
    {
        size_t num_written;

        // 포맷해서 line 에 작성
        // 문자열형 인자인 경우 그 길이를 확실히 제어해야만 버퍼 오버플로를 방지할 수 있다.
        sprintf(line, "%8s %.2f %.2f %.2f %d %d\n", 
        names[i], kills[i], deaths[i], assists[i], wins[i], losses[i]);

        // strlen() 을 사용해서 line에 몇 글자가 저장됐는지 확인
        num_written = strlen(line);
        // 결과를 통해 buffer 에 새로운 줄을 저장하기에 충분한 공간이 있는지 확인
        if (num_written > remaining_buffer_size)
        {
            break;
        }

        // 안전하다면 line 내용을 buffer 에 복사
        strcpy(buffer, line);
        // 보통 상황에서 buffer 시작부터 덮어쓰기 때문에 다음 줄이 이전의 줄을 덮어쓸 수 있다.
        // 이를 방지하기 위해 '\0' 문자가 있는 위치로 buffer 를 이동한다. -> 포인터이기 때문에 가능
        // strcat()과 같은 역할을 한다.
        buffer += num_written;
        // buffer 안에 남은 공간을 기억하는 변수를 업데이트
        remaining_buffer_size -= num_written;
    }
}

// 위에서 저장한 결과를 buffer 로부터 읽어와 계산을 한 뒤 결과를 포맷해서 보여주는 함수
void read_match_history(char* buffer)
{
    // 개행을 구분자로 사용해 토큰화
    // 데이터는 엄청 큰 문자열 하나에 저장되어 있기 때문에 한 줄씩 읽기 위해 '\n' 문자를 구분자로 사용해 문자열을 분리 시킨다.
    const char* DELIM = "\n";
    char* tokenizer;

    // 표 제목 출력
    printf("%8s %7s %7s %7s %7s %6s %6s %9s\n", "Champ", "Kills", "Deaths", "Assists", "KDA", "Wins", "Losses", "Win Ratio");

    // 한 줄씩 토큰화
    tokenizer = strtok(buffer, DELIM);
    while (tokenizer != NULL)
    {
        char name[LINE_LENGTH];
        float kills;
        float deaths;
        float assists;
        int wins;
        int losses;

        float kda;
        float win_ratio;

        // 문자열로부터 6개 값을 모두 읽어온다.
        // 읽기 연산이 실패하진 않았는지 확인, 실패했다면 그 챔피언은 그냥 패스
        if (sscanf(tokenizer, "%s %f %f %f %d %d", name, &kills, &deaths, &assists, &wins, &losses) != 6)
        {
            continue;
        }

        kda = (kills + assists) / deaths;
        win_ratio = wins * 100.0f / (wins + losses);

        printf("%8s %7.2f %7.2f %7.2f %7.2f %6d %6d &8.2f%%\n",
        name, kills, deaths, assists, kda, wins, losses, win_ratio);

        // while 문의 마지막에서 토큰 업데이트
        // 더 이상 읽을 토큰이 없을 때까지 반복
        tokenizer = strtok(NULL, DELIM);
    }
}
