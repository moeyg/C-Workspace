// Dereference operator (역참조 연산자)
// 포인터형 변수에만 사용 가능
// 주소 연산자와 더불어 메모리에 접근할 수 있는 연산자

int main(void)
{
    int variable = 42;
    // 포인터 변수 선언
    int* address = &variable;
    // 역참조 연산자
    int pointer = *address;
}

// & : 주소 연산자
// 어떤 변수의 메모리 주소를 반환