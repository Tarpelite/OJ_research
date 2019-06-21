#include<stdio.h>
int main()
{
	int m,n,fenm,fenz,i=1,j=1;
	scanf("%d%d",&m,&n);
	if(n==0)
	printf("%d",m);
	if(n>0){
		for(fenm=1;i<=n;i++){
			fenm*=i;
		}
		for(fenz=m;j<n;j++){
			m--;
			fenz*=m;
		} 
		printf("%d",fenz/fenm);
	}
}