// Pointer
// 메모리 주소를 저장하기 위한 변수형 = 변수인데 담긴 내용은 메모리 주소
// 해당 주소에서부터 몇 바이트를 읽어야 하는지 하드웨어에게 알려줄 필요가 있기 때문에 포인터 변수를 선언할 때는 "그 주소에 어떤 형의 데이터가 있는지" 를 명시하기 위해 포인터 앞에 자료형을 붙인다.

#include <stdio.h>

void save_address(void);
void change_pointer(void);

int main(void)
{
    save_address();
    change_pointer();

    return 0;
}

void save_address(void)
{
    char c = 'c';
    char* c_address = &c;

    short s = 4242;
    short* s_address = &s;

    int i = 42;
    int* i_address = &i;

    float f = 3.14f;
    float* f_address = &f;

    double d = 10514.2314;
    double* d_address = &d;

    // Pointer variable = (자료형)* variable = &address; = (자료형) *variable = &address;
    // 주소를 따라가면 자료형의 값이 있다.
    printf("c address is %p\n", (void*)c_address); // 0x16dd6f44f
    printf("s address is %p\n", (void*)s_address); // 0x16dd6f43e
    printf("i address is %p\n", (void*)i_address); // 0x16dd6f42c
    printf("f address is %p\n", (void*)f_address); // 0x16dd6f41c
    printf("d address is %p\n", (void*)d_address); // 0x16dd6f408
}

// 포인터 주소 변환
void change_pointer(void)
{
    char a = 'a';
    char b = 'b';
    char* pointer = &a;
    
    printf("%p : %c\n", (void*)pointer, *pointer); // 0x16f4b744f : a
    
    // 포인터에 저장한 주소도 변경할 수 있다.
    pointer = &b;
    
    printf("%p : %c\n", (void*)pointer, *pointer); // 0x16f4b744e : b
}
