// Dangling pointer
// 포인터를 반환할 때 주의할 점
// 함수에서 지역 변수의 주소를 반환할 때, 사용했던 스택이 반환되면서 남아있는 값을 덮어쓸 위험이 존재
// 따라서 포인터가 유효하지 않는 주소를 가리키고 있을 수 있다.
// 유효하지 않는(잘못된) 주소를 가리키는 포인터를 댕글링 포인터 라고 한다.

// cf. 포인터를 반환해도 되는 경우 : 전역 변수, 파일 속 static 전역 변수, 함수 내 static 변수, 힙 메모리에 생성한 데이터

// 포인터를 반환하는 경우
// 도우미 함수 안에 생성한 변수를 다른 함수에서 사용하고자 할 때, 단, 일반 지역 변수면 안 된다. -> 함수 호출이 끝나면 스택에서 사라지기 때문
// 함수 안에섯 대용량의 데이터를 생성하고 그걸 반환하고자 할 때 -> 이 경우는 데이터를 힙 메모리에 생성

// 잘못된 함수의 예
int* add(const int op1, const int op2)
{
    int result = op1 + op2;

    return &result; // 주소를 반환하는 것은 안 된다.
}

int main(void)
{
    int* result;

    result = add(10, 20);

    return 0;
}

/*********************************************************/

// 반환값이 가능한 경우
int* spawn_moster(void)
{
    // static 을 사용한 변수
    static int s_monster_count = 0;

    ++s_monster_count;

    return &s_monster_count;
}