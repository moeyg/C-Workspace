#include <stdio.h>

void exchange_rate_calc();

int main()
{
    // initialization
    int x = 0;
    int y = 0;
    int sum = 0;

    printf("Input two integers\n");
    scanf("%d%d", &x, &y);

    sum = x + y;

    printf("Numbers are %d and %d\n", x, y);
    printf("%d + %d = %d\n", x, y, sum);

    exchange_rate_calc();

    return 0;
}

void exchange_rate_calc(void)
{
    float krw = 0.0f;
    float usd = 0.0f;

    printf("Input KRW\n");
    scanf("%f", &krw);

    usd = krw * 0.00072f;

    printf("₩%.0f = $%.2f\n", krw, usd);
}