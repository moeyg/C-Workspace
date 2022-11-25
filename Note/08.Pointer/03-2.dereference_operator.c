// Dereference operator (역참조 연산자)
// 역참조를 이용해 값을 변경하는 예

#include <stdio.h>

void update_value(void);
void update_argument(float* argument);

int main(void)
{
    float pi;

    update_value();

    pi = 3.14f;
    update_argument(&pi); // 주소 전달

    return 0;
}

void update_value(void)
{
    int score = 100;
    int* pointer = &score;

    // 값 변경 전
    printf("score : %d\n", *pointer); // score : 100
    // 값 변경
    *pointer = 50;
    // 값 변경 후
    printf("score : %d\n", *pointer); // score : 50
}

void update_argument(float* argument)
{
    // 값 변경 전
    printf("argument : %.4f\n", *argument); // argument : 3.1400
    // 값 변경
    *argument = 3.1415f;
    // 값 변경 후
    printf("argument : %.4f\n", *argument); // argument : 3.1415
}
