#include<stdio.h>
#include<stdlib.h>
int s[10000000],n,i;
int cmpl(const void*a,const void*b){
	return *(int *)b-*(int *)a;
} 

int main()
{
	int n,k,sum=0,j,x;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	scanf("%d", &s[i]);
	qsort(s,n,sizeof(s[0]),cmpl);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		if(s[i]==s[i+1])
		{
		k=k+1;
		
		}
		else
		continue;
	}
	x=s[k-1];
	for(j=0;j<n;j++)
	{
		if(x==s[j])
		sum+=1;
		else
		continue;
	}
	
	
	printf("%d %d",s[k-1],sum);
}