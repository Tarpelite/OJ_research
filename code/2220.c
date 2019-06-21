#include<stdio.h>
int c_num(int a,int b);
int c_num(int a,int b)
{
	if(a<b||b<1||a<1)
	return 0;
	if(a==b)
	return 1;
	if(b==1)
	return a;
	else
	return c_num(a-1,b)+c_num(a-1,b-1);
}
int main()
{
    int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",c_num(a,b));
	return 0;
 }