#include<stdio.h>
int main(){
	int m,n,t,i,x,y;
	scanf("%d%d",&m,&n);
	if(m<=n){
		if(m==0)
		printf("0");
		else
		 printf("1");
	}
	else{
	
	if(n==0){
		printf("0");
	}
	else{
   for(x=1,i=m-n+1;i<=m;i++){
        x=x*i;}
    for(i=1,y=1;i<=n;i++){
        y=y*i;}
    t=x/y;
	
	}
	printf("%d",t);}
	return 0;
	}