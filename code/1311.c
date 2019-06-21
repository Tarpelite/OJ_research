#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n;

	scanf("%d",&n);
int	c[100000]={0};
	int a,i=1;
	while(i<=n){
		scanf("%d",&a);
		c[a]++; 
		i++;
		
	}
	int k;
	scanf("%d",&k);
	
	i=100000;
	int p=0;
	while(i>0){
		if(c[i]!=0){
			p++;	
			
		}
		if(p==k){
			
			
			printf("%d %d",i-1,c[i-1]);	
			return 0;
		}
		i--;
		
	}
	
	


	

	return 0;
}