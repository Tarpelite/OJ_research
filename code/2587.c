#include<stdio.h>
int main(){
	int m,n;
	int s1=1,s2=1;
	int i=1;
	int j;
	scanf("%d%d",&m,&n);
	if(n==0){
		printf("0");
		return 0;
	}
	if(n>m/2)
	n=m-n;
	j=n;
	
	for(i=1;i<=j;i++){
		s2*=m;
		m--;
		s1*=n;
		n--;
	}
	printf("%d",s2/s1);
	return 0;
}