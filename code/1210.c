#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main ()
{
    int m,n,i,j,s=1,k=1;
    scanf("%d%d",&m,&n);
    for (j=1;j<n+1;j++){
    	k*=j;
	}
    for (i=m;i>m-n;i--){
    	s*=i; 
	}
     printf("%d",s/k);
return 0;
}