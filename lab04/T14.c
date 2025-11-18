#include <stdio.h>

int a[10][5];

int main()
{
    int n;
    int ch_total = 0, ma_total = 0, en_total = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            scanf("%d", &a[i][j]);
            if (j == 1) ch_total += a[i][j];
            if (j == 2) ma_total += a[i][j];
            if (j == 3) en_total += a[i][j];
        }
    }
    int ch_avr = ch_total / n;
    int ma_avr = ma_total / n;
    int en_avr = en_total / n;
    printf("%d %d %d \n", ch_total, ma_total, en_total);
    printf("%d %d %d ", ch_avr, ma_avr, en_avr);
    return 0;
}