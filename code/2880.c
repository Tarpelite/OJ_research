#include <stdio.h>
#include <math.h>
int isprime (int a){
	int i=0;
	int end=(int)(sqrt(a)+1);
	for (i=2;i<=end;i++){
		if ( a%i==0) return 0;
	}
	return 1;
}
int main()
{
	int i=1,a;
	scanf("%d",&a);
	while (isprime(a+i)!=1){
		i++;
	}
	printf("%d",a+i);
	return 0;
}