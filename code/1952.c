#include<stdio.h>
int num[100500];
int main ()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i = 0; i<n ;i++)
    {
        int ss;
        scanf("%d",&ss);
        num[ss]++;
    }
    int k;
    scanf("%d",&k);
    int t = 0;
    for(i = 100050;i>=0 ;i--)
    {
        if(num[i] > 0)
        {
            t++;
        }
        if(t == k)
        {
            printf("%d %d\n",i,num[i]);
            return 0;
        }
    }
    return 0;
}