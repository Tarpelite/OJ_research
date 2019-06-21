#include <stdio.h>
int main()
{int a,b,i,x;
scanf("%d",&a);
a=a+1;
for(;;a++)
{   x=0;i=2;
    for(i=2;i<a;i++)
    {

        if(a%i==0)
        {x=1;
        break;}
    }

    if(x==0)
    {printf("%d",a);
    break;
    }
}
return 0;}