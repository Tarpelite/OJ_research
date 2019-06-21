#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m,flag;
    scanf("%d",&n);
    for(++n;;n++)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            flag=1;
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            break;
    }
    printf("%d",n);
}