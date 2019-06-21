#include <stdio.h>;


int main(){
	int n,m,p=1,k=1,i,j;
	scanf("%d%d",&m,&n);
	for(i=m;i>m-n;i--){
		p*=i;
	}
	for(j=n;j>0;j--){
		k*=j;
	}
	printf("%d",p/k);

	return 0;
}