// Formatted string
// 일반적인 서식 문자열 형식
// 일반적으로 % 뒤에 최대 4개의 지정자를 가질 수 있다.
// %[flag] [width] [.numeric precision | .string min/max output count] [length modifier] format specifier

// 1. flag (플래그) - 선택
// 2. width (너비) - 선택
// 3. precision (정밀도) - 선택
// 3-1. .numeric precision (숫자 정밀도)
// 3-2. .string min/max output count (문자열 최소/최대 출력 개수)
// 4. length (길이) - 선택
// 5. format specifier (서식 지정자) - ✨ 필수


// 서식 문자열이 필요한 이유
// 1. 오버로딩이 없다. -> `printf(int)` 와 같은 것은 불가능
// 2. 임시 문자열 등을 자동으로 생성 해주지 않는다. -> 메모리를 추가로 잡지 않는다.