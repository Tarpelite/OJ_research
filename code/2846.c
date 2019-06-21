#include<stdio.h>
#include<math.h>
int main()
{
	int n,prime,i;
	scanf("%d",&n);
	if (n < 1 || n > 100000)return 1;
	else if (n == 1){
		printf("2");
	}
	else {
		prime = n + 1;
	    i = 2;
		while (i <= sqrt(prime)){
		    if (prime % i == 0){
			   prime ++;
			   i = 2;
		       continue;
		    }
		    else i++;
	    }
	    printf("%d",prime);
	}
	return 0;
 }