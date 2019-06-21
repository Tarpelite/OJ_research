#include<stdio.h>
int main()
{int m,n,i,j,k;
int a1=1;
int a2=1;
scanf("%d%d",&m,&n);
for(i=m;i>(m-n);i--)
{a1*=i;
}
for(j=n;j>0;j--)
{a2*=j;
}
k=a1/a2;
printf("%d",k);
return 0;
}