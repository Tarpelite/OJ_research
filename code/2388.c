#include<stdio.h>
#include<math.h>
int iszhishu(int n)
{
	int i,k,flag=0;
	k=sqrt(n);
	for(i=2;i<=k;i++){
		if(0==n%i){
			flag=1;
		}
	}
	if(flag==1)
	return 0;
	else
	return 1;
}
int main()
{
	int i,n,jg;
	scanf("%d",&n);
	for(i=n+1;;i++){
		if(iszhishu(i)){
			printf("%d",i);
			break;
		}
	}
	return 0;
}