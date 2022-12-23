// scanf() 예시

#include <stdio.h>

int main(void)
{
    int num;
    int num1;
    int num2;
    int string;
    float fnum;
    char str[64];
    int result;

    // [예시 1]
    // "123a" 를 입력했을 때, 123까지 읽고 다음에 a를 받을 수 있는 %c 가 나올 때까지 대기한다.
    printf("[ex 1] Enter : ");
    result = scanf("%d", &num);         // 123a
    printf("result = %d\n", result);    // result = 1 (1개 읽음)
    printf("num = %d\n", num);          // num = 123

    // [예시 2]
    // "hello" 를 입력했을 때, string을 받을 수 없기 때문에 랜덤 숫자가 나온다.
    printf("[ex 2] Enter : ");
    result = scanf("%d", &string);      // hello
    printf("result = %d\n", result);    // result = 0 (0개 읽음)
    printf("string = %d\n", string);    // string = 1567162369

    // [예시 3]
    // "  12  34" 를 입력했을 때, (12와 34 앞에 공백이 두 칸 존재) 공백이 무시된다.
    printf("[ex 3] Enter : ");
    result = scanf("%d %d", &num1, &num2);          //   12  34
    printf("result = %d\n", result);                // result = 2 (2개 읽음)
    printf("num1 = %d, num2 = %d\n", num1, num2);   // num1 = 12, num2 = 34

    // [예시 4]
    // "12a34" 를 입력했을 때, 읽을 수 있는 숫자(12) 까지만 읽고 멈춘다. 여전히 입력 스트림에는 a34 가 남아있다.
    // num1은 값이 제대로 들어가지만, num2는 그렇지 않다.
    printf("[ex 4] Enter : ");
    result = scanf("%d %d", &num1, &num2);          // 12a34
    printf("result = %d\n", result);                // result = 1 (1개 읽음)
    printf("num1 = %d, num2 = %d\n", num1, num2);   // num1 = 12, num2 = 2

    // [예시 5]
    // "12 34.56" 을 입력했을 때, 공백을 기준으로 12, 34.56 을 읽는다.
    printf("[ex 5] Enter : ");
    result = scanf("%d %f", &num, &fnum);                // 12 34.56
    printf("result = %d\n", result);                     // result = 2 (2개 읽음)
    printf("num = %d, floating num = %f\n", num, fnum);  // num = 12, floating num = 34.560001

    // [예시 6]
    // "1234.56" 을 입력했을 때, .을 기준으로 1234, 0.56 을 읽는다.
    printf("[ex 6] Enter : ");
    result = scanf("%d %f", &num, &fnum);                // 1234.56
    printf("result = %d\n", result);                     // result = 2 (2개 읽음)
    printf("num = %d, floating num = %f\n", num, fnum);  // num = 1234, floating num = 0.560000

    // [예시 7]
    // "12 34.56a" 를 입력했을 때, 공백을 기준으로 12, 34.56 을 읽고 입력 스트립에는 a가 남아있다.
    printf("[ex 7] Enter : ");
    result = scanf("%d %f", &num, &fnum);                // 12 34.56a
    printf("result = %d\n", result);                     // result = 2 (2개 읽음)
    printf("num = %d, floating num = %f\n", num, fnum);  // num = 12, floating num = 34.560001

    // [예시 8]
    // "12 abc 45" 를 입력했을 때 공백을 기준으로 12, abc, 45 를 읽는다.
    printf("[ex 8] Enter : ");
    result = scanf("%d %s %d", &num1, str, &num2);                  // 12 abc 34
    printf("result = %d\n", result);                                // result = 3 (3개 읽음)
    printf("num1 = %d, str = %s, num2 = %d\n", num1, str, num2);    // num1 = 12, str = abc, num2 = 45

    // [예시 9]
    // "12.34a" 를 입력했을 때 .을 기준으로 12.34, a 를 읽는다.
    printf("[ex 9] Enter : ");
    result = scanf("%f %s", &fnum, str);                  // 12.34a
    printf("result = %d\n", result);                      // result = 2
    printf("floating num = %f, str = %s\n", fnum, str);   // floating num = 12.340000, str = a

    // [예시 10]
    // "12.34a" 를 입력했을 때 .을 기준으로 12, .34p 를 읽는다.
    printf("[ex 10] Enter : ");
    result = scanf("%d %s", &num, str);         // 12.34a
    printf("result = %d\n", result);            // result = 2
    printf("num = %d, str = %s\n", num, str);   // num = 12, str = .34a

    return 0;
}