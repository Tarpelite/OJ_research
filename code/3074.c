#include<stdio.h>
int c(int n,int m){
	int s=0;
	if(m==n&&m!=0)
		return 1;
	else if(m==0)
		return 0;
	else if(n==0)
		return 1;
	else
		return s=c(n-1,m-1)+c(n,m-1);
}
int main()
{    
    int n,m,s;
    scanf("%d%d",&m,&n);
    if(n==0)
    	printf("0");
    else{
		s=c(n,m);
		printf("%d",s);
	}
	return 0;
}