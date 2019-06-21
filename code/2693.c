#include<stdio.h>//中途取模未解决； 
int i;
int A[101],j,G[101],l,r,k,m,n,b;
	int N_num=0;
	int M_num=1;
	int H_num;
int n_nn()
{
	for(b=l;b<=r;b++)
     	{
		    N_num+=A[b];
    	}
    	n=N_num%j;
    	N_num=0;
}
int m_mm()
{
	for(b=l;b<=r;b++)
    	{
     		M_num=(M_num*A[b])%j;
    	}
    	m=M_num%j;
    	M_num=1;
}

int h_hh()
{
	if(m==n)
    	{
     		G[i]=A[n]; 

    	 }
     	else if(m>n)
    	{
    		G[i]=A[n];
       		for(b=n;b<m;b++)
    		{
    			G[i]=G[i]^A[b+1];
    		}

    	}
    	else
    	{
    		G[i]=A[m];
    		for(b=m;b<n;b++)
    		{
    			G[i]=G[i]^A[b+1];
    		}
 
    	}
}
 
 int main()
{
	
	scanf("%d",&j);
	scanf("%d",&k);
	
	for(i=0;i<j;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		
	    n_nn();
	    m_mm();
	    h_hh();    	
 	}
	for(i=0;i<k-1;i++)
	{
		printf("%d\n",G[i]);
	}
	printf("%d",G[k-1]);
	return 0;
}