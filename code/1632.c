#include<stdio.h> 
int main()
{int m,n,a=1,b=1,c=1,i;
scanf("%d %d",&m,&n);
for(i=n;i>0;i--)
a=a*i;
for(i=m;i>m-n;i--)
b=b*i;
printf("%d",b/a);
return 0;
};