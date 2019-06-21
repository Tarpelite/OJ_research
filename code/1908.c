#include <stdio.h>
#include<math.h>
#include<string.h>
int main( )
{
int m,n,s=1,k=1,i,b;
scanf("%d%d",&m,&n);
for(i=0;i<n;i++){s=s*m;m--;}
b=n;
for(i=0;i<b;i++){k=k*n;n--;}
printf("%d",s/k);
return 0;
}