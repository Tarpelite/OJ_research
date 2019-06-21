#include<stdio.h>
long long C(int);
int main(){
	int m,n,i;
	scanf("%d%d",&m,&n);
	if(n==0)
	  printf("0");
	long long k;
	k=C(m)/(C(n)*C(m-n));
	printf("%d",k);
	return 0;
} 
long long C(int m){
	int i;
	if (m==1||m==0) 
	  return 1;
	else 
	  return m*C(m-1);
}