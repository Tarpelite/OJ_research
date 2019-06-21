#include<stdio.h>
int prime(int); 
int main()
{
	int n;
	scanf("%d",&n);
	n=n+1;
	while(1){
		if(prime(n)==0)
		n++;
		if(prime(n)==1)
		break;
	}
	printf("%d",n);
	return 0;
} 
int prime(int a)
{
	int i;
	for(i=2;i<a;i++)
	if(a%i==0)break;
	if(i<a)return 0;
	else return 1;
}