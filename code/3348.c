#include<stdio.h>
int get_prime(int n){
	int flag[100010]={},prime[100010]={},num=0;
	for(int i=2;i<=100010;i++){
		if(!flag[i])	prime[++num]=i;
		for(int j=1;j<=num;++j){
			if(prime[j]*i>100010)break;
			flag[i*prime[j]]=1;
			if(i%prime[j]==0)break;
		}
	}
	int i=n;
	while(flag[++i]!=0);
	return i;
}
int main(){
	int n;;
	scanf("%d",&n);
	printf("%d",get_prime(n));
	return 0;
}