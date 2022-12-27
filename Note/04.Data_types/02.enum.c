// enum
// enumeration : 열거형
// int와 섞어 사용 가능하기 때문에 별명을 붙이는 수준으로 볼 수 있다.
// int형 값만 저장이 가능

#include <stdio.h>

int main(void)
{
    enum day
    {
        DAY_MONDAY,
        DAY_TUESDAY,
        DAY_WEDNESDAY,
        DAY_TURSDAY,
        DAY_FRIDAY,
        DAY_SATURDAY,
        DAY_SUNDAY,
    };

    // typedef 사용
    typedef enum month
    {
        MONTH_JAN,
        MONTH_FEB,
        MONTH_MAR,
        MONTH_APR,
        MONTH_MAY,
        MONTH_JUN,
        MONTH_JUL,
        MONTH_AUG,
        MONTH_SEP,
        MONTH_OCT,
        MONTH_NOV,
        MONTH_DEC,
    } month_t;

    enum day what_day_is_today = DAY_WEDNESDAY;
    month_t what_month_is_now = MONTH_NOV;

    printf("%d\n", what_day_is_today); // 2
    printf("%d\n", what_month_is_now); // 10

    return 0;
}