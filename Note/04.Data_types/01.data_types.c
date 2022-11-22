// Data types (자료형)
// C 표준은 기본 자료형의 정확한 바이트 수를 강요하지 않아 컴파일러마다 크기가 상이할 수 있다.

/*******************************************************************************************************/

/* char 자료형 */

/* char는 최소 8 bit 인 정수형 */
/* char는 각 기계에 따라서 데이터를 저장하는 가장 작은 단위 */
/* 따라서 char의 크기를 1 byte 라고 한다. */
/* char는 기본 부호가 지정되지 않아, 부호 정의 생략시 컴파일러와 플랫폼에 따라 unsigned/signed 가 나뉜다. */

// [char] ... [1 byte] ... [-128 ~ -127 or 0 ~ 255]
// [unsigned char] ... [1 byte] ... [0 ~ 255]
// [signed char] ... [1 byte] ... [-128 ~ -127]

/*******************************************************************************************************/

/* short 자료형 */

/* 최소 16 bit 이고, char 크기 이상인 정수형 */
/* 메모리를 적게 쓰기 위해 사용되지만, int 대신 사용할 경우 계산을 하는 과정을 거치기 때문에 성능이 느려지는 문제가 발생할 수 있다. */

// [short] ... [2 byte] ... [-32,768 ~ -32,767]
// [unsigned short] ... [2 byte] ... [0 ~ 65,535]


/* int 자료형 */

/* 최소 16 bit 이고, short 크기 이상인 정수형 */
/* porting에 안전한 범위는 16 bit 이고, 표준에 상관 없이 보통 안전하게 생각해도 되는 범위는 32 bit */
/* CPU의 ALU(산술논리장치)가 사용하는 기본 데이터로, word */
/* word size는 레지스터 크기랑 일치 */

// [int] ... [2 or 4 byte] ... [-32,768 ~ -32,767 or -2,147,483,648 ~ 2,147,483,647]
// [unsigned int] ... [2 or 4 byte] ... [0 ~ 65,535 or 0 ~ 4,294,967,295]


/* long 자료형 */

/* int와 같다. */
/* 최소 32 bit 이고, int 크기 이상인 정수형 */
/* porting에 안전한 범위는 32 bit 이고, 표준에 상관 없이 보통 안전하게 생각해도 되는 범위는 32 bit */

// [long] ... [4 byte] ... [-2,147,483,648 ~ 2,147,483,647]
// [unsigned long] ... [4 byte] ... [0 ~ 4,294,967,295]

/*******************************************************************************************************/

/* float 자료형 */

/* IEEE 754 보장 X */
/* 일반 데스크탑에서 32 bit 이고, IEEE 754 Single과 동일 */
/* unsigned X */
/* 관련 헤더 파일 : <float.h> */

// [float] ... [4 byte] ... [1.2E^-38 ~ 3.4E^+38]


/* double 자료형 */

/* IEEE 754 보장 X */
/* 표준에 따르면 CPU가 계산에 사용하는 기본 데이터 크기 */
/* 일반 데스크탑에서 64 bit 이고, IEEE 754 Double과 동일 */
/* unsigned X */
/* 관련 헤더 파일 : <float.h> */

// [double] ... [4 byte] ... [2.3E^-308 ~ 1.7E^+308]


/* long double 자료형 */

/* double 보다 정밀도가 높음 */
/* 일반 데스크탑에서 double 이상의 크기 */
/* unsigned X */
/* 관련 헤더 파일 : <float.h> */

// [long double] ... [10 byte] ... [3.4E^-4932 ~ 1.1E^+4932]

#include <limits.h>
#include <stdio.h>

int main(void)
{
    // char variable
    char a = 'a'; // a
    char b = 'a' + 1; // b
    char c = 99; // c
    // char size
    char char_size = CHAR_BIT; // 8 bit (1 byte)

    // int variable
    int signed_integer = -42;
    unsigned int unsigned_integer = 4294967295U; // unsigned int literal : U = unsigned

    // long variable
    long signed_long = -42L; // signed long literal : L
    unsigned long unsigned_long = 4294967295UL; // unsigned long literal : UL

    // float variable
    float float_value = 4.2f; // float literal : f

    // double variable
    double double_value = 4.2;
    
    // long double variable
    long double long_double_value = 4.2;

    return 0;
}