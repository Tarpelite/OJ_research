#include <stdio.h>;


int main(){
	int n,j,m=1,i;
	scanf("%d",&n);
	for(i=n+1;i<100005;i++){
		m=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0)
			m=0;
		}
		if(m==1){

			break;
		}
		

	}
   			printf("%d",i); 
	return 0;
}