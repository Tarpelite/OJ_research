#include<stdio.h>
#include<math.h>
int C(int m,int n)
{
 if(m==n)
 return 1;
 else if(n==1)
 return m;
 else 
 return C(m-1,n-1)+C(m-1,n);
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if (m<n)
	printf("1");
	else
	printf("%d",C(m,n));
}