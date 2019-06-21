#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]) 
{ int m,n; 
int i,j,k; 
int a,b,c; 
scanf("%d%d",&m,&n); 
j =1; 
for (k=1;k<=n;k++) 
    j = j*(m-n+k)/k; 
printf("%d",j); 
return 0; 
}