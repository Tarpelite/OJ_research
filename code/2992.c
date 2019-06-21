#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,j,flag=0;
	scanf("%d",&n);
	for(i=n+1;;i++){
      if(prime(i)){
	  printf("%d",i);
      break;
	  }
      
	}
	return 0;
}
int prime(int x){
	int i,flag=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			flag=0;
		return 0;
		}
	}
	if(flag==1)
	return 1;
}