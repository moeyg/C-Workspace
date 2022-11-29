// Sequence point
// 함수 평가 순서 (;)
// C 표준은 함수 평가 순서를 지정하지 않았다.
// 따라서 컴파일러에 따라 평가 순서가 달라질 수 있다.

#include <stdio.h>

float divide(int num1, int num2)
{
    printf("%d / %d = ", num1, num2);
    
    return num1 / (float)num2;
}

int main(void)
{
    // Undefined behavior (결과가 정의되지 않음)
    // 1. 첫 번째 인자가 먼저 평가될 경우 divide(1, 2)
    // 2. 두 번째 인자가 먼저 평가될 경우 divide(2, 1)
    // 3. 동시에 평가될 수 있음 = 알 수 없음
    int num = 0;
    float result = divide(++num, ++num);

    printf("%f\n", result);

    return 0;
}

// 따라서 한 줄에서 동일한 변수를 여러 번 바꾸면 위험하다.
// 함수 매개변수의 평가 순서는 컴파일러마다 다를 수 있다.
// 한 함수의 매개변수들이 동일한 변수를 수정할 경우 결과가 정의되지 않는다.

// add(++i, ++i) -> 어떤 일이 일어날 지 정의되지 않음
// add(i = -1, i = -1) -> 어떤 일이 일어날 지 정의되지 않음
// add(i, i++) -> 어떤 일이 일어날 지 정의되지 않음