#include<stdio.h>
#include<stdlib.h> 
#include <string.h>
int cmp(const void *a, const void *b) 
 { 
 return(*(int *)b-*(int *)a);
				  }
int main()
{
	int n,i,k,m,j=0,count=0,ans,e;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	qsort(a,n,sizeof(a[0]),cmp);
	m=a[0];
	for(i=1;i<n;i++)
	{
		if(m==a[i])
		{
			count++;
		}
		else{
			j++;
			ans=m;
			m=a[i];
			e=count;
			count=1;	
		}
		if(j==k)	
	   break;
	}
	printf("%d %d",ans,e) ;
}