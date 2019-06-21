#include <stdio.h>
#include<math.h>
#include<string.h>
int whether(int);
int main( )
{
int n;
scanf("%d",&n);
for(n++;whether(n)==0;n++);
printf("%d",n);
return 0;
}
int whether(int a)
{
    int b=0,i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)b++;
    }
    if(b!=0)
        return 0;
    else return 1;
}