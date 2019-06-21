#include<stdio.h>
#include<stdlib.h>
int a[10000000];
int cmp(const void*a,const void*b)
	{
		return*(int*)b-*(int*)a;
	}
	
int main()
{
	int n,i,j,k,count=0;
	scanf("%d",&n);
	 
	
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&k);
	
	qsort(a,n,sizeof(a[0]),cmp);
	for (i = 0; i < n - 1; i++)
    		{
        	if (a[i+1] < a[i])
       		    count++;
      		if (count == k)
     	  		{   
           		printf("%d ",a[i]);
            	break;
        		}
    		}
	int num=0;
	for(j=0;j<n;j++)
		{
			if(a[j]==a[i])
			{
				num++;
			}
		}
	printf("%d",num);		
	return 0;	
}