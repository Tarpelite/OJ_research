#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i;
    int sum1=1,sum2=1;
    for(i=0;i<n;i++)
    {
        sum1=sum1*(m-i);
    }
    for(i=1;i<=n;i++)
    {
         sum2=sum2*i;
    }
    sum1=sum1/sum2;
    printf("%d",sum1);
	return 0;
}