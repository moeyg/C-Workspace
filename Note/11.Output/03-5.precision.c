// Precision (정밀도)

#include <stdio.h>

int main(void)
{
    float pi = 3.14;

    // 서식 지정자 'f' 와 함께 사용한다.
    // 최소 width.소수점 아래 자리 수
    // 기본 소수점 아래 자리 수 : 6
    printf("%f\n", pi);     /* 3.140000 */
    // (소수점 포함) 원래 숫자의 width 보다 최소 width 가 크면 공백으로 채운다.
    printf("%2.3f\n", pi);  /* 3.140 */
    // (소수점 포함하지 않음) 원래 숫자의 소수점 아래 자리 수보다 소수점 아래 자리 수가 크면 0으로 채운다.
    printf("%6.3f\n", pi);  /*  3.140 */


    // 서식 지정자 's' 와 함께 사용한다.
    // 최소 width.최대 width
    printf("%5.7s\n", "Hi");            /*    Hi */
    // 출력할 문자열의 길이가 최소 너비보다 작으면 왼쪽을 공백으로 채운다.
    printf("%5.7s\n", "Hello");         /* Hello   */
    // 출력할 문자열의 길이가 최소 너비보다 크면 자른다.
    printf("%5.7s\n", "Hello world");   /* Hello w */
}