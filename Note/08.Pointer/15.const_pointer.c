// Const in p

int main(void)
{
    char ch = 'A';
    int num1 = 10;
    int num2 = 20;

    // 주소를 보호하는 const
    // p is a const to int
    int* const p = &num1;
    // p = &num2; // 컴파일 오류 -> 주소 변경 X
    // ++p; // 컴파일 오류 -> 주소 변경 X
    int* pointer = p; // 값을 복사해서 변경은 가능하다.
    *pointer = 42;

    // 메모리 주소 안에 저장된 값을 보호하는 const
    // ptr is a pointer to const int
    // const int* ptr == int const* ptr
    const int* ptr = &num1;
    ptr = &num2; // 주소 변경 가능

    // 주소와 값을 보호하는 const
    // c is a const pointer to const char
    const char* const c = &ch;

    return 0;
}