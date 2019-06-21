#include<stdio.h>
int main(){
	int n,m;
	double a;
	scanf("%d %d",&m,&n);
	if(n==0&&m!=0){
		printf("0");
		return 0;
	}
	if(m<n||m==0){
		return 0;
	}
	
	int i,p;
	a=1.0;
	i=n+1;
	p=1; 
	while(i<=m||p<=m-n){
		if(i<=m){
			a=a*i;
			i=i+1;

		}
		if(p<=m-n){
			a=a/p;
			p=p+1;

		}
	}
	unsigned int b;
	b=(unsigned int)a;
printf("%u",b);
	return 0;
}