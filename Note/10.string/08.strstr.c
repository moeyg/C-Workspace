// String string
// 반환값 : char*
// -> substr이 str에 있다면 해당 substr이 시작하는 주소
// -> substr에 str이 없다면 NULL 포인터
// -> 반환값이 const char* 가 아닌 이유는 str이 있다면 매개변수로 보낸 substr이 변환되어 나가기 때문에 char* 를 사용하는데 애매한 점이 있다. 따라서 메모리 영역이 아닌 스택 영역에서 복사한 값을 사용하는 이유이다.

char* strstr_func(char* substr, char* str)
{
	int	index;

	if (*str == '\0')
	{
		return (substr);
	}
	while (*substr != '\0')
	{
		if (*substr == *str)
		{
			index = 0;
			while (str[index] != '\0' && substr[index] == str[index])
				index ++;
			if (str[index] == '\0')
				return (substr);
		}
		substr ++;
	}
	return (0);
}

// 문자열 찾기 함수가 메모리 주소를 반환하는 이유
// 새로운 문자열을 만들어 반환할 경우 메모리 관리 측면에서 효율적이지 못하고 실수할 수 있다.
// 새 문자열을 반환하려면 메모리 어딘가에 그 문자열을 복사해야 하는데, 
// 복사하는 위치가 스택이면 함수가 끝나면 사라지고, 반환값이 더 이상 유효하지 않은 메모리 주소가 된다.
// 만약 복사하는 위치가 동적 메모리 할당을 통해 힙에 저장되면, 메모리 할당을 운영체제에 요구하기 때문에 느리다. 그리고 사용하지 않을 경우 free 를 해야하는데 잊을 가능성이 존재해 메모리 누수가 발생할 수 있다.
// 따라서 주소 반환 시 실수가 가장 적은 방법은 원본에서 찾고자 하는 문자열이 시작하는 주소(위치)를 반환하는 것이 낫다. 추가적으로 메모리를 쓰지도 않고 실수도 방지할 수 있기 때문이다.