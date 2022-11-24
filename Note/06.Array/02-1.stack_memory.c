// Stack memory

// LIFO : Last In First Out
// 각 함수에서 사용하는 지역 변수 등을 임시적으로 저장하는 공간
// 스택 메모리의 크기는 프로그램 빌드 시에 결정
// 스택 메모리의 위치는 실행 시에 결정
// 함수가 호출될 때마다 그 함수에서 필요한 공간을 스택에 받았다가 그 함수가 반환하면 공간을 돌려주는 개념 (삭제 X, 쓰레기 값으로 남음)

// 모든 기본 자료형 변수는 빌드 시에 크기가 결정되기 때문에 스택 메모리에 할당될 수 있다.
// (다른 언어에서 new로 만든 데이터는 힙 메모리에 할당)
// 기본 자료형을 함수 매개변수로 전달하면 스택에 복사본을 만드는데 이것을 값형 이라고 한다.
// 스택 메모리를 빌리고 반환할 때마다 언제나 빈 공간없이 차곡차곡 쌓여 있다.

int add(const int x, const int y)
{
    int result = x + y;

    return result;
}

int main(void)
{
    int x = 1;
    int y = 2;

    return add(x, y);
}

// 스택은 큰 주소에서 작은 주소로 쌓인다.
// EBP(Extended Base Pointer) : 현재 스택 프레임의 첫 주소
// ESP(Extended Stack Pointer) : 현재 스택 포인터
// stack frame : 각 함수가 사용하는 스택 메모리의 범위로 EBP ~ ESP

// 1. main 함수에서 main() 스택 프레임을 갖는다. -> 컴파일러가 지역 변수 타입과 종류, 수를 계산해 바이트를 할당한다.
// 2. cpu 레지스터에 변수 x, y를 각각 push
// 3. add 함수에 인자 x, y를 push, ESP가 마지막으로 들어온 인자를 가리킨다. 
// (순서대로 변수, 변수, 인자, 인자가 들어오고 마지막에 들어온 값을 ESP가 가리킨다.)
// 4. 호출할 함수(add)의 주소로 점프하고, 그 함수 실행이 끝나면 돌아갈 main 함수 즉, 현재 ESP 주소를 push

// 5. EBP와 ESP를 같은 곳을 가리키도록 맞춰준다.
// 6. add() 스택 프레임을 갖는다.
// 7. cpu 레지스터에 위에 쌓인 main 함수 스택에서 복사한 값 x, y를 가져온다.
// 8. 합을 구하고 결과값을 add의 지역 변수 result 값을 eax 레지스터에 저장한다. (여기서 값을 리턴)
// 9. 스택 프레임을 현재 있는 EBP로 올려준다. 이 때 쌓여있던 변수는 삭제되는 것이 아니라 쓰레기 값으로 남아있다.
// 10. 현재 가리키는 ESP 주소로 return -> main 함수로 돌아간다.
// 11. 스택 프레임을 EBP로 올려준다.
// 12. 반환한다.