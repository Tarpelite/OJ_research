#include<stdio.h> //直接用定义算会出现数据过大的情况，所以应用递归的方法计算 
int c(int n,int m)
{
	if (n==m) 
		return(1);
	switch(m){
		case 0: return 1; 
		case 1: return n; 
		default: return c(n-1,m)+c(n-1,m-1); 
	}
    
		

}
int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	
	printf("%d",c(n,m));
	return 0;
}