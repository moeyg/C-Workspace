// width (너비)
// 출력할 값의 최소 width를 지정한다.

// width를 지정하는 두 가지 방법
// 1. [숫자] : % 뒤에 나오는 10진수 숫자가 지정할 width 가 된다.
// 2. [*] : 숫자 와일드 카드, 가변 인자로 폭을 지정한다.

#include <stdio.h>

int main(void)
{
    char c = 'C';
    int num = 42;

    // % 뒤에 나오는 10진수 숫자를 넣어준다.
    printf("%3d\n", num);   /*  42 */
    printf("%3c\n", c);     /*    C */

    // * 에 들어갈 숫자를 서식 지정자 앞에 넣어준다.
    printf("%*d\n", 3, num);    /*  42 */
    printf("%*c\n", 3, c);      /*  C */

    // 출력할 값이 지정한 width 보다 작으면 자릿수를 맞추기 위해 공백 또는 0을 채워 넣는다.
    // 문자는 앞에 0을 넣는 것이 불가능
    printf("%5d\n", num);       /*    42 */
    printf("%05d\n", num);      /* 00042 */
    printf("%0*d\n", 5, num);   /* 00042 */

    // 출력할 값이 지정한 width 보다 크면 값이 잘리면 안되기 때문에 width 옵션을 무시한다.
    printf("%1d\n", num);       /* 42 */
    printf("%01d\n", num);      /* 42 */
    printf("%0*d\n", 1, num);   /* 42 */
    printf("%1c\n", c);         /* C */


    // width에 음수가 할당되면 -(flag) 좌측 정렬 + width 로 간주된다.
    // 앞에 작성된 0 또는 공백이 사라진다.
    printf("%-5d\n", num);      /* 42 */
    printf("%-*d\n", 5, num);   /* 42 */
    printf("%-5c\n", c);        /* C */
}
