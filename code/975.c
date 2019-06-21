#include<stdio.h>
int main()
{
    int a,b,i=2;
    scanf("%d",&a);
    b=a+1;
    while(1)
    {
        if(b%i==0)
        {
            b++;
            i=1;
        }
        if(i>b/2)
        {
            break;
        }
        i++;
    }

    printf("%d",b);

    return 0;
}