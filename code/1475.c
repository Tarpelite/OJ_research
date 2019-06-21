#include<stdio.h>
int comb_num(int a,int b)
{
	if(a<b||a<0||b<0)
	return 0;
	if(b==1) return a;
	if(a==b) return 1;
	return comb_num(a-1,b)+comb_num(a-1,b-1);
} 
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",comb_num(a,b));
	return 0;
}