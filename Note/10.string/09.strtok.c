// String delimeterize
// delimeter 안의 문자들을 기준으로 하여 문자열을 나눈다. 즉, "Hello C programing!" 이라는 문자열이 있을 때 공백 문자를 기준으로 각각의 단어들을 나눈다.
// char* strtok(char* str, const char* delimeter)
// str의 다음 delimeter를 구하려면 delimeter 대신 NULL을 넣고 다음 delimeter를 찾는다.
// 더이상 delimeter이 없다면 NULL 포인터 반환
// 토큰화 하는 str은 원본이 바뀌기 때문에 const가 아니다.

#include <stdio.h>
#include <string.h>

char* strtok_func(char* str, const char* delimiter);
size_t strlen_func(char const *str);

int main(void)
{
	char str[] = "Hello,World..! C Programing is fun!";
	char delimeter[] = " .,!";	
	char* token = strtok_func(str, delimeter);

	while (token != NULL){
		printf("%s\n", token);
		token = strtok_func(NULL, delimeter);
	}

	return 0;
}

char* strtok_func(char* str, const char* delimiter)
{
    size_t index;
    // delimiter의 길이를 알아야 케이스 검사 가능
    size_t delimiter_length = strlen_func(delimiter);

    // 함수 매개변수로 NULL이 들어올 때 그 전에 받았던 str을 사용하니까 어딘가에 저장되어야 한다.
    // 따라서 저장할 임시 변수 NULL 초기화 후 static 변수에 넣어 기억
    static char* temp = NULL;
    // 구분자를 제거한 문자열을 저장할 변수
    char* remove_delimeter;

    // str이 NULL이 아니고, temp에 값이 없다면 temp에 str 대입
    if (str != NULL && temp == NULL)
    {
        temp = str;
    }

    // 문자열이 끝났을 경우
    if (str == NULL && temp == NULL)
    {
        return NULL;
    }

    remove_delimeter = temp;
    while (1)
    {
        // 연속된 구분자일 경우
        for (index = 0; index < delimiter_length; index ++)
        {
            if (*remove_delimeter == delimiter[index])
            {
                remove_delimeter ++;
                break;
            }
        }

        // 연속된 구분자가 없는 경우
        if (index == delimiter_length)
        {
            // 반복해서 구분자가 제거된 값을 temp에 저장
            temp = remove_delimeter;
            break;
        }
    }

    // 위 과정을 거친 후 아무것도 남지 않았을 때
    if (*temp == '\0')
    {
        temp = NULL;
        return temp;
    }

    // 만약 해당되는 구분자를 찾으면 null로 변환 후 탈출하고 remove_delimeter 호출
    while (*temp != '\0')
    {
        for (index = 0; index < delimiter_length; index ++)
        {
            if (*temp == delimiter[index])
            {
                // 여기서 구분자를 null로 변환
                // remove_delimeter는 temp와 같기 때문에 여기서 remove_delimeter가 토큰화 된다.
                *temp = '\0';
                break;
            }
        }
        temp ++;
        if (index < delimiter_length)
        {
            break;
        }
    }
    return remove_delimeter;
}

size_t strlen_func(char const *str)
{
    size_t length = 0;

    while (*str != '\0')
    {
        length ++;
        str ++;
    }

    return length;
}