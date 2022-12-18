// Format specifier (서식 지정자)

#include <stdio.h>

int main(void)
{
    char c = 'c';
    int num = 42;

    // % : '%' 를 출력
    printf("%%\n");     /* % */

    // c : 문자(char) 출력
    printf("%c\n", 'C');    /* C */

    // s : 문자열(char[]) 출력
    printf("%s\n", "Hello world");  /* Hello world */

    // d : 부호 있는 정수 출력
    printf("%d\n", -42);    /* -42 */

    // u : 부호 없는 정수 출력
    // u 에 부호 있는 정수를 넣을 경우 해당 수의 비트 패턴에 해당하는 부호 없는 수가 출력
    printf("%u\n", 42);     /* 42 */
    printf("%u\n", -42);    /* 4294967254 */

    // o : 부호 없는 정수를 8진수로 출력 (숫자 앞에 0은 붙여주지 않는다.)
    printf("%o\n", 42); /* 52 */

    // x : 부호 없는 정수를 16진수 소문자로 출력 (숫자 앞에 0X는 붙여주지 않는다.)
    printf("%x\n", 42); /* 2a */

    // X : 부호 없는 정수를 16진수 대문자로 출력 (숫자 앞에 0X는 붙여주지 않는다.)
    printf("%X\n", 42); /* 2A */

    // f : float, double 부동 소수점 출력
    printf("%f\n", 3.14);   /* 3.140000 */

    // e/E : 부동 소수정을 지수 표기법으로 출력
    printf("%e\n", 3.14);   /* 3.140000e+00 */
    printf("%E\n", 3.14);   /* 3.140000E+00 */

    // p : 포인터 값을 출력하는데 void* 만 받는다. -> 모든 주소는 어차피 길이가 같기 때문에 어떤 포인터를 void* 로 캐스팅해도 안전하다.
    printf("%p\n", (void*)num);     /* 0x2a */
    printf("%p\n", (void*)c);       /* 0x63 */

    return 0;
}