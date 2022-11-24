// Static keyword
// static (자료형) s_variable 으로 선언
// 다른 파일에서 전역 변수에 접근 못 하게 막는 법으로 이 전역 변수의 범위가 선언된 파일로 한정된다.
// 하지만 전역 변수로 프로그램 실행 동안에 실제 공간을 계속 차지하고 있다.
// static 변수를 다른 파일에서 접근하려고 하면 링커 오류

/***********************************************************/

// monster_repo.h file
void add_monster(void);

/***********************************************************/

// monster_repo.c file
#include "monster_repo.h"

static int s_monster_count = 0; // 이 파일 안에서만 사용할 수 있는 전역 변수

void add_monster(void)
{
    // 지역 변수에 static을 사용할 수 있다.
    // static을 사용하면 개념상 전역 변수지만, 그 안에서만 접근이 가능하다.
    // 지역 변수는 함수 반환 시 값이 스택에서 pop 되지만, static이 붙은 함수 내 변수는 여전히 값이 저장되어 있다.
    // 따라서 함수가 실행될 때 초기화는 1번만 되고, 값은 유지
    static int s_money = 0;

    ++s_monster_count;
    ++s_money;
}

/***********************************************************/

// main.c file
#include <stdio.h>
#include "monster_repo.h"

int main(void)
{
    add_monster();
    printf("# monsters : %d\n", s_monster_count); // static 변수 사용 불가

    return 0;
}
