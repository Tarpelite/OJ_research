#include<stdio.h>
int a[100000];
int main()
{
    int n=0;
    int i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int p=0;
        scanf("%d",&p);
        a[p]++;
    }
    int k=0;
    scanf("%d",&k);
    for(i=99999;i>0;i--)
    {
        if(a[i]!=0)
        {
            k--;
        }
        if(k==0)
        {
            x=i;
            break;
        }
    }
    printf("%d %d",x,a[x]);
    return 0;
}