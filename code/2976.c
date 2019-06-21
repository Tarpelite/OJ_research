#include<stdio.h>

int zhi(int n){
	int i,m,p;
	for(i=n+1;;i++){
		m=0;
		for(p=2;p<i;p++){
			if(i%p==0){
				m++;
			}
		}
		if(m==0){
			break;
		}	
	}
	return i;
}
int main(){
	
	int n;
	
	scanf("%d",&n);
	
	printf("%d",zhi(n)); 
}