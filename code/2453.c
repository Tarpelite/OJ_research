#include<stdio.h>
void go(int x[],int a,int n)
{
	int i;
	for(i=n;i>=a;i--)
	{
		x[i+1]=x[i];
	}
}

int main()
{
	int n,A[100001]={0},b[100000],i,a,j=0,k,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		A[a]++;
		if(A[a]==1)
		{
			b[j]=a;
			j++;
			b[j]=b[j-1];
			if(j==1)
			continue;
			if(b[j]<=b[j/2])
			{
    		for(t=j/2-1;t<=j-2;t++)
		   	{
		    	if(b[j]>b[t])
		    	{
		        	go(b,t,j-2);
		        	b[t]=b[j];
		        	break;
	            }
	        }
	    }
	    else
	    {
	    	for(t=0;t<=j-2;t++)
		   	{
		    	if(b[j]>b[t])
		    	{
		        	go(b,t,j-2);
		        	b[t]=b[j];
		        	break;
	            }
	        }
		}
	    } 
	}
	scanf("%d",&k);
	printf("%d %d",b[k-1],A[b[k-1]]);
	return 0;
}