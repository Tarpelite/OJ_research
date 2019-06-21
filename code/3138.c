#include <stdio.h>
#include <math.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    for(a++;;a++)
    {
        for(i=2;i<=a;i++)
        {
            if(a%i==0) break;
        }
        if(a==i)
        {
            printf("%d",a);
            break;
        }
    }
    return 0;
}