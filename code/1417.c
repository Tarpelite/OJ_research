#include<stdio.h>

int main()
{
	int n,a[100000]={0},i,j,jmax=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		a[j-1]++;
		if(jmax<j){jmax=j;}
	}
	scanf("%d",&k);
	for(i=jmax-1;i>0;i--)
	{
		if(a[i]){k--;}
		if(k==0){printf("%d %d",i+1,a[i]);break;}
	}
	return 0;
}