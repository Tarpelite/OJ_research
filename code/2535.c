#include<stdio.h>
int main(){
	int a[100001]={0},n,k,m,i,j,max,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	
	for(i=100000;i>0;i--)
	{
		if(a[i]!=0)
			flag++;
		if(flag==k)
		{
			printf("%d %d",i,a[i]);
			break;
		}	
	}
	
	return 0;
}