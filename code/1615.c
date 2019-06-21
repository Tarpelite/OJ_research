#include <stdio.h>
int main()
{  int n,i;
    scanf("%d",&n);
	n=n+1;
	int judge=0;
	while(judge==0){
		int j=0;
		for(i=2;i<n;i++){
			if(n%i==0){
				j=0;
				break;
			}
			else{
				j=1;
			}
		}
		if(j==1){
			printf("%d",n);
			judge=1;}
	n++;	
	} 



   return 0;
	}