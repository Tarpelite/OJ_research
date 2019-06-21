#include<stdio.h>
#include<math.h>

int main()
{
    int flag,i,x,j;
    scanf("%d",&x);
    
    for(i=x+1;i>x;i++)
    {
        flag=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
               {
                   flag=0;
                   break;
               }
        }
        if(flag==1)
            {
                printf("%d",i);
                break;
            }
    }
    return 0;

}