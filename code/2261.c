#include <stdio.h>

int a[10000000], b[100000000] = {0};

int main()
{
    int n, i, max, time = 0, record, k;

    scanf("%d", &n);

    for(i = 0; i <= n - 1; i++)
        scanf("%d", &a[i]);


    max = a[0];
    for(i = 0; i<= n - 1; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    for(i = 0; i <= n - 1; i++)
    {
        b[a[i]]++;
    }

    scanf("%d", &k);

    for(i = max; i > 1; i--)
    {
        if(b[i] != 0)
            time++;
        if(time == k)
        {
            record = i;
            break;
        }
    }

    printf("%d %d", record, b[record]);

    return 0;
}