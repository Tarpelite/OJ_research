#include<stdio.h>

int main()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	if(n==1){
		
		printf("2");
				
		return 0;
	}
	for(i=n+1;i<=100100;i++){
		
		j = 2;
		
		while(i%j!=0){
		
			j++;
			
			if(i==j){
				
				printf("%d ",i);
				
				return 0;
			}
		}
	}
}