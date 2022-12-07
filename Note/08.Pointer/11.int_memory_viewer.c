// int* -> char*
// 포인터를 다른 자료형으로 캐스팅하면 그 메모리 주소에 어떤 형이 들어있는지 알려주는 것이다.
// 딱 1 byte 씩 접근하고 싶을 때 사용한다.

#include <stdio.h>

int main(void)
{
    size_t index;
    const int NUM = 0x12345678;
    const char* NUM_ADDRESS = (char*)&NUM;
    // 실제 NUM_ADDRESS에 저장되어 있는 값은 12345678 인데, 여기에 접근할 때 4 byte 씩이 아닌 1 byte 접근하겠다는 의미

    for (index = 0; index < sizeof(NUM); ++index)
    {
        printf("%hhx ", *(NUM_ADDRESS + index)); // 78 56 34 12 
    }
    printf("\n");

    printf("NUM in hex from : 0x%x", NUM); // NUM in hex from : 0x12345678

    return 0;
}