#include<stdio.h>
#include<math.h>
int pri(int x)
{
    int i=2;
    int m=1;
    for(i=2;i<=sqrt(x);i++)
    {
        if (x%i==0)
        {
            m=0;
            break;
        }
    }
    return m;
}
int main()
{
    int x;
    int i=0;
    scanf("%d",&x);
    for(i=x+1;;i++)
    {
        if(pri(i)==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}