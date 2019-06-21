#include<stdio.h>
int main()
{int a,b,d;
scanf("%d",&a);
d=a+1;
int i,c;
for(i=d;i<1000000;i++)
{for(c=2;c<=i;c++)
{if(i%c==0)
{if(c==i)
{b=i;
i=1000000;

break;
}
if(c<d)
{break;
}
}

if(i%c!=0)
{continue;
}

}
}
printf("%d",b);
return 0;
 }