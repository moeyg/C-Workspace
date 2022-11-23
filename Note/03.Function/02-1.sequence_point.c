// Sequence point
// 함수 평가 순서 (;)
// C 표준은 함수 평가 순서를 지정하지 않았다.
// 따라서 컴파일러에 따라 평가 순서가 달라질 수 있다.

#include <stdio.h>

size_t g_boss_monster = 0;

int find_next_dungeon(void)
{
    // 던전을 찾으면 g_boss_monster = 1 할당
}

int spawn_boss_monster(void)
{
    // g_boss_monster = 1이면, 보스몹을 소환하고 return 1
}

int main(void)
{
    // Unspecified
    // 함수 find_next_dungeon()과 함수 pawn_boss_monster() 중 어떤 것이 먼저 호출될 지 알 수 없다.
    // find_next_dungeon()이 먼저 호출된다는 보장이 없다.
    // 따라서 두 함수를 두 줄에 따로 호출하는 것이 좋다.
    if (find_next_dungeon() + spawn_boss_monster() == 1)
    {
        // game starting code ...
    }
    
    return 0;
}

