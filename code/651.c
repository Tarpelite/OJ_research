#include<stdio.h>
int p(int);
int main()
{
	int n,z,i=1;
	scanf("%d",&n);
	while(1){
		if(p(n+i)){
			printf("%d",n+i);
			return 0;
		}
		i++;
	}
}
int p(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}