#include<stdio.h>
int main(){
	int m,n,a,b,c;
	scanf("%d %d",&m,&n);
	
	int i,ans1=1,ans2=1;
	for(i=1;i<=n;i++)
		ans1=ans1*i;
	for(i=m-n+1;i<=m;i++)
		ans2=ans2*i;
		
	printf("%d",ans2/ans1);
	
	return 0;
}