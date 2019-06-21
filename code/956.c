#include<stdio.h>
int a(int i){
	int k=2;
	while(k<i){
		if(i%k==0){
			return 2;
			break;
		}
		k++;
	}
	return 1;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	i=n+1;
	while(a(i)!=1){
		i++;
	}
	printf("%d",i);
	return 0;
}