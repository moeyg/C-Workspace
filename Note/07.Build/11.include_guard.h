// Include guard

// 전처리기 지시문은 코드를 컴파일 하기 전에 전처리기가 처리
// 이때 어떤 상수를 정의하고, 컴파일러에게 조건적으로 코드를 컴파일 하라고 지시
// 만약, FOO_H 가 정의되지 않았다면(조건), FOO_H 를 정의해라(지시)

// foo.h
#ifndef FOO_H // ifndef = if not define
#define FOO_H // define
/* 헤더 파일 내용 */
#endif /* FOO_H */
// #ifndef 조건의 블록 끝을 알려준다. + 주석을 이용해 파일 이름을 알려주기도 한다.