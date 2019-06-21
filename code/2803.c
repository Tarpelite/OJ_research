#include<stdio.h>
int b[100001]={0};
int main()
{
    int a,m=0,n,k,i=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        b[a]++;
    }
    scanf("%d",&k);
    for(i=100000;i>=0;i--)
    {
        if (b[i]!=0){m++;}
       if(m==k){j=i;break;}
        }
    printf("%d %d",j,b[j]);
    return 0;
    }