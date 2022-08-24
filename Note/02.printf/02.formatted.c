#include <stdio.h>

int main() 
{
    // C formatted

    // %d : 부호 있는 정수 출력
    printf("%d\n", -42); // -42
    // %u : 부호 없는 정수 출력
    printf("%u\n", 42); // 42
    
    // %ld : 부호 있는 long 정수 출력
    // %lu : 부호 없는 long 정수 출력
    // %lld : 부호 있는 long long 정수 출력
    // %llu : 부호 없는 long long 정수 출력

    // %x : 정수를 16진수 소문자로 출력
    printf("%x\n", 42); // 2a
    // %X : 정수를 16진수 대문자로 출력
    printf("%X\n", 42); // 2A
    // %o : 정수를 8진수로 출력
    printf("%o\n", 42); // 52

    // %f, %lf : 실수형 출력, 6자리까지 출력 후 반올림
    printf("%f\n", 0.42); // 0.420000
    printf("%f\n", 0.42424242); // 0.424242
    printf("%lf\n", 0.42424242); // 0.424242
    // %e : 실수를 지수 표기법 소문자로 출력
    printf("%e\n", 0.42); // 4.200000e-01
    // %E : 실수를 지수 표기법 대문자로 출력
    printf("%E\n", 0.42); // 4.200000E-01

    // %c : 문자열 하나 출력
    char c = 'c';
    printf("%c\n", c); // C
    // %s : 문자열 출력
    printf("%s\n", "Hello World!"); // Hello World!

    // %p : 메모리 주소 출력
    int *num;
    printf("%p\n", num); // 0x104f23dd8

    return 0;
}