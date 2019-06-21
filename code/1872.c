#include<stdio.h>
int yes(int n);
int main(){
	int n;
	scanf("%d",&n);
	int i=n+1;
	while(yes(i)){
		i++;
	}
	printf("%d",i);
	
	
	return 0;
}
int yes(int n){
	int i=0;
	int j;
	for(j=2;j<n;j++){
		if(n%j==0){
			i=1;
			break;
		}
	}
	return i;
}