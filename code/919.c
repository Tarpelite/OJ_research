#include<stdio.h>
int main()
{
    int a[110000]={0},n,k,i=0,x,j=100000;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&x);
        a[x]++;
        i++;
        //printf("a%d=%d\n",x,a[x]);
        //printf("i=%d\n",i);
    }

    i=1;

    scanf("%d",&k);

    while(i<=k)
    {
        //printf("a%d=%d\n",j,a[j]);
        if(a[j]!=0)
            i++;
        j--;
        //printf("i=%d\nj=%d\n",i,j);
    }

    j++;

    printf("%d %d",j,a[j]);

    return 0;
}