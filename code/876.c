#include<stdio.h>
int jc(int,int);
int main()
{
	int m,n,k;
	scanf("%d %d",&m,&n);
	if(n<=m){
	k=jc(m,m-n+1)/jc(n,1);
	printf("%d",k);
    } 	
	return 0;
}
int jc(int x,int y){
	if(x==y){
		return x;
	}
	else{
		int p=1;
		for(;y<=x;y++){
			p=p*y;
		}
		return p;
	}
}