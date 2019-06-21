#include <stdio.h>
int iszhi(int);
int main()
{
	int n, i;
	scanf("%d", &n);
	n++;
	while(1){
		if(iszhi(n))
		   break;
		n++;
	}
	printf("%d\n", n);
	return 0;
}

int iszhi(int n)
{
	int i;
	for(i = 2;i < n/2+1;i++){
		if(n%i == 0)
		   return 0;
	}
	return 1;
}