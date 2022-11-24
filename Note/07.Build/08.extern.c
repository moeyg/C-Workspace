// Extern keyword
// 외부에서 선언한 전역 변수로 extern (자료형) g_variable 으로 선언
// 다른 파일에 있는 전역 변수에 접근하기 위해 사용하는 키워드

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