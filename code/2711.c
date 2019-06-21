#include<stdio.h>
int main()
{int m,n,b;

scanf("%d%d",&m,&n);
int i=m;
int s=1;
int d=1;
for(b=n;b>0;b--)
{s=s*i; 
i--;
}
for(b=1;b<=n;b++)
{d=d*b;
 } 
 s=s/d;
printf("%d",s);
return 0;
}