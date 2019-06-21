#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,a[100001]={0},k,jishu=0;
    int i,scan;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&scan);
        a[scan]++;
    }
    scanf("%d",&k);
    for(i=100000;i>0;i--)
    {
        if(a[i]!=0)
            jishu++;
        if(jishu==k)
            break;
    }
    printf("%d %d",i,a[i]);
    return 0;
}