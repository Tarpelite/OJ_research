#include <stdio.h>

int main()
{
	int m,n;
	int i;
	int a = 1;
	
	scanf("%d%d",&m,&n);
	
	if(n > m - n){
		n = m - n;
	}
	
	for(i = m;i > m - n;i--){
		a *= i;
	}
	for(i = n;i > 1;i--){
		a /= i;
	}
	
	printf("%d",a);

    return 0;
}