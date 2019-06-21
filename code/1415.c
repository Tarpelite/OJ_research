#include <stdio.h>
int main()
{
    int a,b,c=2;
    scanf("%d",&a);
    b=a+1;
    while(1)
    { c=2;
        while(b%c!=0)
        {
            c++;
        }
        if(b==c)
            break;
        else
            b++;
    }
    printf("%d\n",b);
    return 0;
}