// size_t
// sizeof() 연산자 사용 시 반환되는 자료형
// 부호 없는 정수형이나 실제 데이터형은 아니다.
// _t = typedef : 다른 자료형에 별칭을 붙인 것
// 따라서 플랫폼에 따라 다른 자료형을 쓰기 위해서 size_t 를 typedef 한 것
// C89 표준에서는 size_t 의 크기를 딱히 명시하지 않으나, 배열을 만들면 그 배열의 byte 크기를 얻을 수 있다고 명시한다.
// C99 표준에서 최소 16 bit 를 요구하고, 보통은 unsigned int (32 bit) 사용
// 어떤 것의 크기를 나타내기 위해 사용
// 예를 들어 반복문이나 배열에 접근할 때 사용 = 음수가 필요 없을 때 -> 포팅 문제 해결 가능

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