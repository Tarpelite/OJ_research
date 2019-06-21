#include<stdio.h>

int main(){
	int m,n,i,ans=1,fxxk=1,damn,j;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
        ans=ans*i;
    for(j=m-n+1;j<=m;j++){
        fxxk=fxxk*j;
    }
    damn=fxxk/ans;
    printf("%d",damn);
	return 0;
 }