#include <stdio.h>
#include <stdlib.h>

int szs(int);
int main()
{long long a,b,i,up=1,down=1;
scanf("%lld %lld",&a,&b);
if(b==0)
    printf("0");
else{
for(i=1;i<=b;i++)
    down*=i;
for(i=1;i<=b;i++,a--)
up*=a;
printf("%lld",up/down);
}
    return 0;

}