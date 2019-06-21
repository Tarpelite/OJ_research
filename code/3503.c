#include <stdio.h>
#include <stdlib.h>

int szs(int);
int main()
{int a,b,i,up=1,down=1;
scanf("%d %d",&a,&b);
for(i=1;i<=b;i++)
    down*=i;
for(i=1;i<=b;i++,a--)
up*=a;
printf("%d",up/down);

    return 0;

}