// Circular header include (순환 헤더 인클루드)
// 헤더가 중첩 인클루드 되어서 생기는 문제
// ex. a.h에서 #include "b.h" / b.h에서 #include "a.h"

// 해결법
// 1. #include 는 가능하면 C 파일에서만 하기
// 2. b 헤더에 a 헤더를 인클루드 하는 대신 a에 정의된 것을 전방 선언하기
// 3. 하지만, 어쩔 수 없이 헤더 파일을 서로 인클루드 해야하는 상황이 생길 때는 인클루드 가드

// include guard - 전처리기 지시문
// foo.h
#ifndef FOO_H // ifndef = if not define
#define FOO_H // define
/* 헤더 파일 내용 */
#endif