#include<stdio.h>
int main()
{
	int n,b,i=2;
	scanf("%d",&n);
	b=n+1;
	while(i){
		while(b%i!=0){
			i++;
		} 
		if(i!=b)
			{
				b++;
				i=2;
			}
		else
			break;
	}
	printf("%d",b);
	return 0;
}