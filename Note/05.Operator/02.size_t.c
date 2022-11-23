// size_t
// 부호 없는 정수형이나 실제 데이터형은 아님
// _t = typedef : 다른 자료형에 별칭을 붙인 것
// C99 표준에서 최소 16 bit 를 요구하고, 보통은 unsigned int (32 bit) 사용
// 어떤 것의 크기를 나타내기 위해 사용
// 예를 들어 반복문이나 배열에 접근할 때 사용 = 음수가 필요 없을 때

#include <stdio.h>

int main(void)
{
    int array[42];
    size_t index;

    for (index = 0; index < 30; ++index)
    {
        array[index] = (int)index;
    }

    return 0;
}