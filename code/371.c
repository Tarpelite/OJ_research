#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(n++;;n++){
		for(i=2;i<=n;i++){
			if(n%i==0)	break;
		}
		if(i==n){
			printf("%d",n);
			break;
		}
	}
	
	
	return 0;
 }