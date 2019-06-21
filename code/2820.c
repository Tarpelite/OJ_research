#include<stdio.h>

int str[100000]={0};

int main(){
	
	int n,i,m,a,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a);
		
		str[a]++;
		
	}
	
	scanf("%d",&k);
	
	m=0;
	for(i=99999;;i--){
		if(str[i]!=0){
			m++;
		}
		if(m==k){
			break;
		}
	}
	
	printf("%d %d",i,str[i]);
}