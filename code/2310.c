#include<stdio.h>

int main() 
{//m!/(n!*(m-n)!) 
	int m,n;
	scanf("%d%d",&m,&n);
	if(n>m/2){
		n=m-n;
	}
	int i;
	double c=1.0;
	for(i=0;i<n;i++){
		c*=1.0*(m-i)/(1.0*n-i);
	}
	printf("%.0f",c);
	return 0;
}