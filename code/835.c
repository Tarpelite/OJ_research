#include<stdio.h>
int main()
{ int m,n;
scanf("%d%d",&m,&n);
long long a=1,b=1,c=1;
for(int i=1;i<m+1;i++)
a=a*i;
for(int i=1;i<n+1;i++)
b=b*i;
for(int i=1;i<m-n+1;i++)
c=c*i;

printf("%d",a/(b*c));
return 0;

}