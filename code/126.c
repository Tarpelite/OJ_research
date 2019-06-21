#include<stdio.h>
int ccc(int m,int n){
	if(n==m||n==0)
		return 1;
	else
		return ccc(m-1,n)+ccc(m-1,n-1);
}
int main(){
    int n,m;
	scanf("%d%d",&n,&m);
    printf("%d",ccc(n,m));
    return 0;
}