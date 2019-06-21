#include<stdio.h>

int main(){
	int m,n,i;
	long long result=1,a=1;
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++){
		result*=(m-i);
	}
	for(i=1;i<=n;i++)
	   a*=i;
	result/=a;
	printf("%d",result);
	return 0;
}