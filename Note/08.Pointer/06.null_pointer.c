// NULL pointer
// 반환할 주소가 없는 경우에는 NULL 반환
// NULL을 대입시 실제 메모리 주소가 없다는 뜻
// 아무것도 가리키지 않는 포인터
// 값이 '0'인 정수 상수 표현식, 또는 void* 로 캐스팅된 표현식

// 전용 매크로, NULL 포인터를 표현할 때 사용
#define NULL ((void*)0);

void foo()
{
    int number;
    int* pointer = &number;

    // 반환할 메모리 주소가 없다.
    pointer = NULL;
}

// NULL이 들어오지 않는다고 가정한 경우 assert() 를 사용해 검증
#include <assert.h>

void increase_price(int* current_price)
{
    assert(current_price != NULL);

    // code
}

// NULL 포인터 사용하는 예
// 1. 포인터 변수를 초기화 하고 싶을 때 (= 아직 참조할 주소가 없을 때)
// 2. 포인터 변수가 유효한 주소를 참조하고 있는지 확인하고 싶을 때 = 아무것도 가리키지 않는 포인터 변수를 역참조 하면 결과가 정의되지 않음
// 3. 댕글링 포인터를 막기 위해 : 동적 메모리 할당된 메모리를 해제했는데 여전히 가리키는 포인터가 있다면 그 주소를 초기화 해야 한다. 이 때 NULL 포인터를 이용해 리셋
#include <stdlib.h>

void do_something(void)
{
    // 지금 사용하지 않으므로 초기화 = 유효하지 않음
    int* pointer = NULL;

    // 유효하지 않은 주소를 역참조하면 유효한 연산이 아니다. (Null pointer crash)
    // 올바르게 사용하려면 if (pointer != NULL) 안에 넣어준다.
    *pointer = 100;

    // 동적 메모리 할당 포인터 리셋
    int* malloc_pointer = (int*)malloc(sizeof(int));
    free(malloc_pointer); // 메모리 해제 했지만, 주소를 지워주지는 않음
    malloc_pointer = NULL; // NULL로 초기화해서 주소를 지워줌
}