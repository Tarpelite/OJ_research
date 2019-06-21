#include<stdio.h>
int is_zs(int);
int main()
{
	int a,i,ans;
	scanf("%d",&a);
	for(i=a+1;!is_zs(i);i++);
	printf("%d",i);
	return 0;
}
int is_zs(int x){
	int i;
	for(i=x-1;x%i!=0;i--);
	if(i==1) return 1;
	return 0;
}