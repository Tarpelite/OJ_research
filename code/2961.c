#include<stdio.h>
int whe(int k); 
int main(){
	int n,k;
	scanf("%d",&n);
	for(k=n+1;;k++){
		if(whe(k)==1)
			break;
	}
	printf("%d",k);
	return 0;
}
int whe(int k){
	int i,m=0;
	for(i=1;i<=k;i++){
		if(k%i==0)
			m++;
	}
	if(m==2)
		return 1;
	else 
		return 0;
}