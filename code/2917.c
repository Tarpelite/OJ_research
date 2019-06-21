#include<stdio.h>
int main(){
	int n,f,i,j;
	scanf("%d",&n);
	for(f=n+1;;f++){
		for(i=2;i<f;i++){
			j=f%i;
			if(j==0)	break;
		}
		if(i==f){
			
			break;}
	}
	printf("%d",f);
	return 0;
}