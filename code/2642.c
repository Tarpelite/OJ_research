#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int N,t=n;
	
	for(N=t+1;N<2*t;N++){
		int i=n;
		while(i>1){
			if(N%i==0)
			break;
			i--;
			if(i==1)
			 {printf("%d",N);
			 return 0;
			 }
		}
		
	}
   
    return 0;
}