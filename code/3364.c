#include<stdio.h>
int main(){
int n,m,k;	
	scanf("%d",&n);
	k=n+1;
	m=2;
	if(k==2){printf("%d",2);
	}
	while(k>2){
    	if((k%m==0)+(k!=m)==2){k++;m=2;continue;}
		if(k%m!=0&&m+1<k){m++;continue;}
		if(k%m!=0&&m+1==k){printf("%d",k);break;}
		}
	return 0;
		}