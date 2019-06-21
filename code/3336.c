#include <stdio.h>

int main()
{
    int i;
    int n,num,count[100000]={0},k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        count[num]++;
    }
    scanf("%d",&k);
    for(i=99999;k>0;i--)
    {
        if(count[i]!=0) k--;
    }
    i++;
    printf("%d %d",i,count[i]);
    return 0;
}