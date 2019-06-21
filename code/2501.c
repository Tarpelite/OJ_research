#include <stdio.h>
#include <stdlib.h>
int a[10002000];

int compare(const void*a,const void *b)
{
	return (*(int*)a-*(int*)b);
}

int main()
{
	int n,k,i=1;
	scanf("%d",&n);
	while(n--)
	{	scanf("%d",&a[i]);
		i++;
	}
	i--;
	scanf("%d",&k);
	int j;int hold;int cout;
	qsort(a,i+1,sizeof(a[1]),compare);
		
	int k1=1,qwe=a[i];int cout1=1;int flag=1;
	for(cout=i-1;cout;cout--)
	{	
		if(a[cout]<qwe&&flag!=0)
		{qwe=a[cout];
		cout1=1;
		k1++;
		}
		if(k==k1)
		{	flag=0;
			if(qwe==a[cout])
			{cout1++;
			}
			else break;
		}
		
	
		
	}	
	printf("%d %d",qwe,k==1?cout:(cout1-1));
	return 0;
	
			
}