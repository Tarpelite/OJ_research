#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
int i,m,n;
long long x,y,c;
scanf("%d%d",&m,&n);
x=1;
y=1;
for(i=m;i>m-n;i--) x=x*i;
for(i=1;i<=n;i++) y=y*i;
c=x/y;
printf("%d",c);
return 0;
}