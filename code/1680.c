#include<stdio.h>
int main()
{
    int x,i,j,a,flag;
    scanf("%d",&x);
    for(i=x+1; i<2*x; i+=1)
    {
        for(j=2; j<i; j++)
        {
            if(i%j!=0)
            {
                if(j==i-1)
                {
                    a=i;
                    flag=1;
                    break;
                }
                else
                    continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
            break;
        else
            continue;
    }
    printf("%d",a);
}