#include <stdio.h>
long long jiecheng(int a);
int main() 
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(n<m)printf("%lld",jiecheng(m)/(jiecheng(n)*jiecheng(m-n)));
	if(n>=m)printf("1");
	return 0;
}
long long jiecheng(int a)
	{
		if(a!=0){	
		long long sum=1;
		int i;
		for(i=1;i<a+1;i++)
			sum=sum*i;
		return sum;
		}
		if(a==0) return 1;
	
	}