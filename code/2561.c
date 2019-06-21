#include<stdio.h> 
int c(int m,int n)
{int s=1,r=1; for(;n>0;n--){s=s*m/r; m--; r++;}
return s;}
int main()
{
	int m,n;
	int s=0;
	scanf("%d%d",&m,&n);
    s=c(m,n);
	printf("%d",s);
	return 0;
}