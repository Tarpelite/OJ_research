#include<stdio.h>
int x[100001];

int main()
{
    int n,max,a,i,k;
    scanf("%d",&n);
    for (;n>=1;n--)
    {
        scanf("%d",&a);
        x[a]++;
    }
    scanf("%d",&k);
    max=-1000001;
    for (i=100001;i>=1,k>=1;i--)
    {
        if (x[i])
        {
            k--;
            max=i;
        }
    }
    printf("%d %d",max,x[max]);
    return 0;
}