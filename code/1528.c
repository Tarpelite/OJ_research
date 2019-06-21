#include<stdio.h>
#include<math.h>
int main()
{
int m,i,k;
scanf("%d",&m);
m=m+1;
while(1){
k=sqrt(m);
for(i=2;i<=k;i++)
if(m%i==0)break;
if(i>k){printf("%d",m);break;}
else m=m+1;}
return 0;
}