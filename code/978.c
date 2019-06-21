#include<stdio.h>
int tr(int);
int main()
{
	int n,m;
	scanf("%d",&n);
	if(tr(n)){
	    m=n+1;
	    while(tr(m)==0){
	    	m=m+1;
		}
		printf("%d",m);
	}
	return 0;
}
int tr(int x){
	if(x==1) return 0;
	else if(x==2) return 1;
	else{
		int k=0;
		for(int p=2;p<x;p++){
			if(x%p==0){
				k++;
			}
		}
		return (k==0);
	}
}