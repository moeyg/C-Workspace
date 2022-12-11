// Extern keyword
// 외부에서 선언한 전역 변수로 extern (자료형) g_variable 으로 선언
// 다른 파일에 있는 전역 변수에 접근하기 위해 사용하는 키워드
// 헤더 파일에 extern 으로 변수를 넣어줄 수 있지만, 만약 필요한 C 파일들에서만 사용하고 싶다면 extern 사용해서 변수를 넣어줄 수 있다.
// extern 없이 전역 변수를 선언 후 사용하게 되면 링크가 중복 전역 변수로 판단해 오류를 출력한다. 

/***********************************************************/

// monster_repo.h file
extern int g_monster_count;
void add_monster(void);

/***********************************************************/

// monster_repo.c file
#include "monster_repo.h"

int g_monster_count = 0; // 다른 파일에서 사용 시에는 초기화 필수

void add_monster(void)
{
    ++g_monster_count;
}

/***********************************************************/

// main.c file
#include <stdio.h>
#include "monster_repo.h"

int main(void)
{
    add_monster();
    printf("# monsters : %d\n", g_monster_count);

    return 0;
}