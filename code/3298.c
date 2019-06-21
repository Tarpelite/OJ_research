#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=n+1;i<1000000;i++,k=1)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                k=0;
                break;
            }
        }
        if(k==1)
        {
            printf("%d",i);
            break;
        }
     }
    return 0;
}