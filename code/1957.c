#include<stdio.h>

int main(){
	int n,m;
	scanf("%d",&n);
	for(m=n+1;m<=1000000;m++) 
        if(pri(m)){
        	printf("%d",m);
        	break;
		}  
	
	return 0;
}

int pri(int m){
	int i;
	for(i=2;i<m;i++)
		if(m%i==0)
		    return 0;
	return 1;
}