#include<stdio.h>
int f(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int i,n,k;
	scanf("%d",&n);
	for(i=n+1;;i++){
		f(i);
		if(f(i)==1){
			k=i;
			break;
		}
	}
	printf("%d",k);
	return 0;
}