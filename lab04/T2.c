#include <stdio.h>
#include <string.h>

int freq[100005]; //数字i出现的频数

int main()
{
    int n;
    scanf("%d", &n);
    memset(freq, 0, sizeof(freq)); //初始化，所有数出现频数为0
    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x == -1) break;
        if (x != 0) freq[x]++;
        if (x == 0)
        {
            int pairs = 0;
            for (int i = 1; i <= 10000 / n; ++i)
            {
                if (freq[i] == 0) 
                    continue;
                else
                {
                    if (freq[i * n] != 0) 
                        pairs += (freq[i] * freq[i * n]);
                }
            }
            printf("%d\n", pairs);
            memset(freq, 0, sizeof(freq));
            continue;
        }
    }
    return 0;
}