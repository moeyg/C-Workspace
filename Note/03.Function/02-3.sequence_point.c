// Sequence point
// 함수 평가 순서 (;)
// C 표준은 함수 평가 순서를 지정하지 않았다.
// 따라서 컴파일러에 따라 평가 순서가 달라질 수 있다.

#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;;
    int k = 0;;

    // Short Circuit
    // || 연산자의 경우 우선 좌변을 평가하여 T면 우변은 평가하지 않는다. (F면 우변 평가)
    // && 연산자의 경우 좌변을 평가하고 T면 우변을 평가한다. (F면 우변 평가 X)
    // 아래 코드에서 동작 방식은 ||, && 가 sequence point라서 ++i이 먼저 평가되고 Short Circuit에 따라 뒤의 연산은 평가되지 않는다.
    // 연산자 우선 순위는 || < && 지만, Short Circuit 평가에 따라 진행된다.
    // 논리 연산자 ||, && 는 평가 순서를 강제하는 연산자 
    if (++i || ++j && ++k)
    {
        printf("true\n");
    }
    printf("%d, %d, %d\n", i, j, k);

    // true
    // 1, 0, 0

    return 0;
}