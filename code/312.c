#include <stdio.h>
int main(){
	int sum=1,ans=1,m,t,n,i;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++){
		sum=sum*(m-i);
		ans=ans*(n-i);
	} 
	t=sum/ans;
	printf("%d",t);
}