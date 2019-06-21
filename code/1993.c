#include<stdio.h>
int main()
{
int a,b,d,i;
scanf("%d",&a);
b=a+1;
while(1)
{for(i=2;i<b;i++)
{if(b%i!=0)
d=1;
else
{d=0;
break;}
}
if(d==0)
b++;
else
break;
}
printf("%d",b);
return 0;
}