#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int isnotzs(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0) {
			return 1;
		}
	}
	return 0;
}
 
int main()
{
	int n;
	scanf("%d",&n);
	do
		n++;
	while(isnotzs(n));
    printf("%d",n);
    return 0;
}