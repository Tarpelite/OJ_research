#include<stdio.h>
int N(int l, int r);
int M(int l, int r);
int H(int l, int r);
int min(int x,int y);
int max(int x, int y);

int a[10001]; 
int n;
//数组a和长度n可以定义为全局变量，省的每次调用N,M,H都要传参数 
int main()
{
	int l,r,i,k,b;//C语言中变量定义请写在函数体开头 
	
	scanf("%d%d",&n,&k);//n和k写在一起，更简洁，而且体现出他俩在一行 
	//执行完语句之后尽量不要继续定义变量，否则请在最开头定义。
     
	/*这里用for更好*/
	for (i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	/*反倒是这里可以用while*/
	while (k--)//因为区间组数k只需要用一次，而且不关心每一轮是第几个，只管循环k次 
	{
		scanf("%d%d",&l,&r);
		b = H((min(N(l,r),M(l,r))), (max(N(l,r),M(l,r))));
		/*这个结果一组一组输出就成，不用等到最后再输出*/
		printf("%d\n",b); 
		
	}
	return 0;
}


int N(int l, int r)
{
	int z = 0;
	for(;l<=r;++l)
	{
		z += a[l] % n;
		z %= n;
		/*加法也可以边加边取余，不用等到最后*/
	}
	return z;
}//定义N函数； 
int M(int l, int r)
{
	int z = 1;
	for(;l<=r;++l)
	{
		z *= a[l] % n;
		z %= n;
		/*务必一边乘一边取余，不要等到最后再取余*/
	}
	return z;
}//定义M函数； 
int H(int l, int r)
{
	int z = 0;
	for(;l<=r;++l)
	{
		z ^= a[l];
	}
	return z;
}//定义H函数； 
int min(int x,int y)
{
	int c;
	c= x>y ? y:x;
	return c;
 } //定义min; 
int max(int x, int y)
{
	int c;
	c= x>y ? x:y;
	return c;
}//定义max；