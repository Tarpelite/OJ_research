#include<stdio.h>
int max(int,int);
int min(int,int);

int main()
{
	int n,k;
	int a[10000],l,r;
	int i;
	int niu,mou,hug;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		niu=0;
		mou=1;
		scanf("%d%d",&l,&r);
		int j;
	    for(j=l;j<=r;j++)
	    {
		    niu=niu+a[j];
		    niu=niu%n;
	    }
	    
	    for(j=l;j<=r;j++)
	    {
		    mou=mou*(a[j]);
		    mou=mou%n;
	    }
	  
	    hug=a[min(niu,mou)];
		for(j=min(niu,mou)+1;j<=max(niu,mou);j++)
	    {
	    	hug=hug^a[j];
		}
		printf("%d\n",hug);
	}
	return 0;
}

int max(int a,int b)
{
	if (a>=b)
	    return a;
	else
	    return b;
}

int min(int a,int b)
{
	if (a>=b)
	    return b;
	else
	    return a;
}