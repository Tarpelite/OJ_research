#include<stdio.h>
#include<math.h>
int main(){
	int n,i,a;
	scanf("%d",&n);
	n=n+1;
	while(1){
		for(i=2;i<n;i++){
			if(n%i==0)
			    a++;
		}
		if(a==0){
			printf("%d",n);
			break;
		}
		else
		    n++,a=0;
	} 
	return 0;
	
}