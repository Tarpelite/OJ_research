#include<stdio.h>

long long int hint(int x,int y){
	long long int ans=1;
	for(int i=x;i<=y;i++) ans*=i;
	return ans;	
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	//if(m>n) printf("1\n");
    //else 
	printf("%lld\n",hint(m+1,n)/hint(1,n-m));
	return 0;
}