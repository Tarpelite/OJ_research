#include<stdio.h>

int main()
{
    int n, i, j, num;
    num=0;
    scanf("%d", &n);
    for(i=n+1;i<1000000;i++)
    {
        for(j=i-1;j>1;j--)
        {   num=0;
            if(i%j==0)
               {
                num=num+1;
                break;
               }
        }
        if(num==0)
        {
            break;
        }
    }
    printf("%d\n", i);
    return 0;
}