#include<stdio.h>
int zhishu(int z)
{int i,c;
if(z==2)
return 1;
else if(z==1)
return 0;
else
{for(i=2;i<z;i++)
{if(z%i==0)
{c=0;
break;}
else
c=1;}
return c;}
}
int main()
{int a,b,d;
scanf("%d",&a);
b=a+1;
d=zhishu(b);
while(d!=1)
{b=b+1;
d=zhishu(b);
}
printf("%d",b);
return 0;
 }