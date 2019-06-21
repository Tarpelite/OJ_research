#include<math.h>
#include <stdio.h>

int main()
{
	int n,i;
	
	scanf("%d",&n);
	//if(n==1){
	 //   printf("2");
	//	return 0;	
//	}
    n++;
	for(;n<110000;n++){
		for(i=2;i<n;i++){
			if(n%i==0){
				break;
			}else if(i==n-1){
				printf("%d",n);
				return 0;
			}
		}	
	}
 }