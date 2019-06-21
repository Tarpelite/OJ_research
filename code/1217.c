#include<stdio.h>

int main(){
	int n,i,j,damn,flag=0;
	scanf("%d",&n);
	for(i=n+1;i<=100003;i++){
        for(j=2;j<i;j++){
            damn=i%j;
            if(damn==0)
               break;
            }
        if(j<i)
            continue;
        else{
            printf("%d",i);
            break;
        }
	}

	return 0;
 }