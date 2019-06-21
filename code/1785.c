#include <stdio.h>
#include <stdlib.h>
int main()
 {
 	int n,x;
 	int i=0,j=0;
    long long a[100];
 	int r=0,l=0;
 	long long s=0,t=1;
 	int max,min;
 	int ans;
 	scanf("%d%d",&n,&x);
 		for(i=0;i<n;i++)
 		{
 			scanf("%lld",&a[i]);
		 }
	for(j=0;j<x;j++)
 	{
 		scanf("%d%d",&r,&l);
		for(i=r;i<=l;i++)
		{
			s=s+a[i];
			t=t*a[i]%n;	
		}
		s=s%n;
		if(s==t)
		{
		printf("%lld\n",a[s]);
		s=0;t=1;
		continue;
		}
 		else if(s>t)
 		{max=s;min=t;}
 		else
 		{max=t;min=s;}
 		if(max>n)
 		max=n;
 		l=max;
		r=min;
		ans=a[r];
 		for(i=r+1;i<=l;i++)
 		ans=ans^a[i];
 		printf("%d\n",ans);
 		s=0;t=1;
 	}
	return 0;
}