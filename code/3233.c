#include <stdio.h>
int main(){
	int m,n;
	double res=1;
	int res_int;
	int i;
	scanf("%d%d",&m,&n);
	if(m==0||n==0){
		printf("0");
		return 0;
	}
	if(n>m/2) n=m-n;
	for(i=m;i>m-n;i--){
		res*=i;
		res/=(m-i+1);
	}
	res+=0.00001;
	res_int=res;
	printf("%d",res_int);
	return 0;
}