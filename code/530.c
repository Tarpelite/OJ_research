#include<stdio.h>
int main()
{
	int m, n,i=0;
	scanf("%d",&m);
	while(i!=2){
		i=0;
		m=m+1;
		n=1;
		while(n<=m){
			if(m%n==0){
				i=i+1;
				n=n+1;
			}else
			i=i;
			n=n+1;
		}
	}
	printf("%d",m);
	return 0;
 }