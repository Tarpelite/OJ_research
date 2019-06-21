#include<stdio.h>
int f(int);
int main()
{
	int a,n;
	scanf("%d",&a);
	if(a==2)
	printf("3");
	else{
		n=a+2;
	    while(f(n)<1){
		n+=2;
	    }
	    printf("%d",n);
	}
}
int f(n){
	int i=3;
	while(i<=n-2){
		if(n%i==0)
		return 0;
		i+=2;
	}
	return 1;
}