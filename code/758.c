#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n==2)
		printf("3");
		
	else{
	int i,j;
	for(i=1;i>0;i++){
		for(j=2;j<=(n+i-1);j++){
			if((n+i)%j==0)
				break;	
		
		if(j==(n+i-1)){
			printf("%d",n+i);
			return 0;}
	}}
 } 
}