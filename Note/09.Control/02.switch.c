#include <stdio.h>

enum day
    {
        DAY_MONDAY,
        DAY_TUESDAY,
        DAY_WEDNESDAY,
        DAY_TURSDAY,
        DAY_FRIDAY,
    };

int main(void)
{
    enum day today_is = DAY_TURSDAY;
    switch (today_is)
    {
    case DAY_MONDAY:
        printf("Today is Monday\n");
        break;
    case DAY_TUESDAY:
        printf("Today is Tuseday\n");
        break;
    case DAY_WEDNESDAY:
        printf("Today is Wednesday\n");
        break;
    
    case DAY_TURSDAY:
        printf("Today is Tursday\n");
        /* Intentional fallthrough*/
    
    case DAY_FRIDAY:
        printf("Today is Friday\n");
        break;
    
    default:
        printf("what_day_is_today?");
        break;
    }

    /* Output value */
    // Today is Tursday
    // Today is Friday

    return 0;
}