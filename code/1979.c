#include <stdio.h>
unsigned long long f(int x){
	int i;
	unsigned long long sum;
	if(x==0){sum=1;}
	else{
		sum=1;
		for(i=1;i<=x;i++){sum=i*sum;}
	}
	return sum;
}
int main()
{
	int m,n;
	unsigned long long over,a,b,c;
	scanf("%d %d",&m,&n);
	a=f(m);b=f(n);c=f(m-n);
	over=a/(b*c);
	printf("%llu",over);
	return 0;
}