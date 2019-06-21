#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=1;i<=100000;i++)
    {
        b=a+i;

        for(j=2;j<=b-1;j++)
        {
            if(b%j==0) break;
            if(j==b-1)
        {
            printf("%d",b);
            return 0;
        }
        }

    }
}