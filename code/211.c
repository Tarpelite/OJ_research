#include <stdio.h>

int main()
{
    int x,is=1,i;
    scanf("%d",&x);
    x+=1;
    for(;;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0) {
              is=0;
              break;}
        }
        if(is==1||i>=x)
            break;

    }
    printf("%d",x);
    return 0;
}