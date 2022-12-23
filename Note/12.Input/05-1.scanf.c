// scanf()
// 한 데이터씩 읽는 방법
// 텍스트로 들어오는 내용을 원하는 자료형(정수형, 실수형, 문자, 문자열 등)으로 지정해서 입력을 받는 방법

// scanf() : 키보드(stdin) 로부터 입력을 받아 변수에 저장
//           int scanf(const char* format, ...);

// fscanf() : 파일 스트림으로부터 읽음
//            int fscanf(FILE* stream, const char* format, ...);

// sscanf() : C 스타일 문자열 버퍼로부터 읽음 -> sprintf() 참고
//            int sscanf(const char* buffer, const char* format, ...);

// scanf() 반환값
// 값을 읽은 후 매개변수로 들어온 주소에서 원본을 바꿔준다. (out 매개변수, 출력용 매개변수)
// 몇 개의 데이터를 읽었는지 반환
// 첫 데이터를 읽기 전에 실패했다면 EOF 반환

// scanf() 서식 문자열 형식
// % [*] [width] [length modifier] format specifier
// 일반적으로 '%' 뒤에 최대 4개의 지정자를 가질 수 있다.
// 서식 지정자는 필수로 들어가야 하고 나머지는 선택 사항
// 반드시 순서를 지켜서 작성해야 한다.

// scanf() 서식 지정자
// % : % 를 문자로 인식 -> scanf("%%"); -> % 를 읽어주지는 않음
// c : 문자(char) -> scanf("%c", &char);
// s : 한 단어 -> scanf("%s", &string);
// d : 부호 있는 10진수 수 -> scanf("%d", &signed_int);
// x : 부호 없는 16진수 수 -> scanf("%x", &unsigned_hex);
// f : 부동 소수점(float) -> scanf("%f", &float);

// 모든 데이터는 공백 문자를 기준으로 한 단어씩 읽거나 읽기가 가능할 때까지 읽는다.
// -> 예를 들어 "123a" 를 int 변수에 입력하면 123만 읽는다.
// 따라서 공백 문자는 %c 로 읽는 방법밖에 없다.

// scanf() width
// %s 의 경우 width를 지정하지 않으면 버퍼 오버플로가 발생할 수도 있다.

#include <stdio.h>

// stdin 에서 정수 읽기
int main(void)
{
    int num;
    int num1;
    int num2;

    printf("Enter a number : ");
    // scan formatted
    // 참조에 의한 전달 -> 주소를 받아 원본을 바꿔준다.
    scanf("%d", &num);
    printf("num = %d\n", num);

    // ✨ width 지정 시 주의할 점

    // [예시 1]
    // scanf() : 123456789 123456789
    // printf() : num1 = 123456789, num2 = 123456789
    // 버퍼 내 int 전부 사용, 비워진다.
    printf("[ex01] Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // [예시 2]
    // scanf() : 123456789 123456789
    // printf() : num1 = 123, num2 = 456
    // 버퍼 내 int 일부만 사용
    printf("[ex02] Enter two numbers : ");
    scanf("%3d %3d", &num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // [예시 3]
    // 아래 scanf()를 입력하기 전에 예시 2에서 버퍼에 남은 int를 내보낸다.
    // printf() : num1= 789, num2 = 123
    printf("[ex03] Enter two numbers : ");
    scanf("%3d %3d", &num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    // 따라서 scanf()는 버퍼 내에 값이 남아있다면 그 값을 우선으로 읽는다. 

    return 0;
}

// 한 데이터씩 읽는 방법이 유용한 경우
// 텍스트를 다른 자료형으로 곧바로 읽어오는 가장 간단한 방법
// 사용자 입력을 받을 때 가장 많이 쓰는 방법