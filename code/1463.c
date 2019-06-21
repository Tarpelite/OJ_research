#include<stdio.h>
int main()
{int k,n,i;
scanf("%d",&n);
for(k=n+1;k<=200000;k++){
	for(i=2;i<k;i++){
		if(k%i==0)
		break;
		else if(i==k-1){
			printf("%d",k);
			return 0;
		}
	}
}}