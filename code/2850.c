#include<stdio.h>
int CC(int m,int n)
{    
	 if(m<n||m<1||n<1)
	 return 0;
	 if(m==n)
	 return 1;
	 if(n==1)
	 return m;
	 return CC(m-1,n)+CC(m-1,n-1);
}
int main()
{
 	int m,n,c;
 	scanf("%d%d",&m,&n);
  printf("%d",CC(m,n));
return 0;
}