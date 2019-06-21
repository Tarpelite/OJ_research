#include<stdio.h>

int main()
{
	int x, i;
	scanf("%d", &x);
	x++;
	for(i=2;i<x;i++){
		if(x%i==0){
			x++;
			i=2;
		}
	
	}	
	printf("%d",x); 
	return 0;
}