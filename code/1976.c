#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100000
int mp[MAX_N + 5];
int main()
{
    int n,k,i,km = MAX_N, kM = 0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&k);
        mp[k]++;
        if (k < km)km = k;
        if (k > kM)kM = k;
    }
    scanf("%d",&k);
    for (i = kM;i>=km;i--)
    {
        if (mp[i] > 0)k--;
        if (!k) break;
    }
    printf("%d %d\n",i,mp[i]);
	return 0;
}