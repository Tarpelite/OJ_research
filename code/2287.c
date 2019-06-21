#include<stdio.h>
int s(int m){
	int flag=1, i;
	for(i=2;i<m;i++){
		if(m%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n, m, flag=1;
	scanf("%d",&n);
	if(n==1){
		printf("2");
		return 0;
	}
	
	for(m=n+1; ;m++){
		if(flag==s(m)){
			printf("%d",m);
			break;
		}
	}
	
	return 0;
}