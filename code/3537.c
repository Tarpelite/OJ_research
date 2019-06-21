#include<stdio.h>
int main(int argc, char* argv[])
{
int isum=1;
int m,n,k;
scanf("%d%d",&m,&n);
for(k=1;k<=n;k++)
isum=(isum*(m-n+k))/k;//先算乘法，避免先算（m-n+k）/k除不尽带来误差
printf("%d",isum);
return 0;
}