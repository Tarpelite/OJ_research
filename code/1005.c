#include<stdio.h>
int main()
{
int m,n;
scanf("%d%d",&m,&n);

long long int a=1,b=1,c=1,t,p;
p=m-n;
int i=1,j=1,k=1;
for(i=1;i<=m;i++){
  a*=i;
}
for(j=1;j<=n;j++){
  b*=j;
}
for(k=1;k<=p;k++){
  c*=k;
}
t=a/(b*c);
printf("%d",t);
return 0;
}