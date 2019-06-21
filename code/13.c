#include<stdio.h>
int main(){
	int n,i,t,flag=0;
	scanf("%d",&n);
	for(i=n+1;;i++){
		for(t=2;;t++){
			if(i%t==0)
				break;
			if(t==i/2||t==(i+1)/2){
			
				printf("%d\n",i);
				flag=1;
				break;}
		}		
		if(flag)
		break;
	}
	return 0;
}