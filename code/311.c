#include<stdio.h>
int min(int,int);
int max(int,int);
int main()
{
	int n,k,l,r,i,j,k1[100],k2[100],h=0,h1=0,h2,h3=0,h4=0;
	int a[10000],s;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 for(i=0;i<k;i++)
	 {  h1=0;
	    h=0;
	    h2=1;
	 	scanf("%d %d",&k1[i],&k2[i]);
	 	for(j=k1[i];j<=k2[i];j++)
	 	{
	 		h1+=a[j];
	 		h2=h2*a[j];
	 		h2=h2%n;
		 }
		 h1=h1%n;
		 h3=min(h1,h2);
		 h4=max(h2,h1);
		 for(s=h3;s<=h4;s++)
		 {
		 	h=h^a[s];
		 }
		 printf("%d\n",h);
	 }
	
	 
    return 0;
}
int max(int x,int y)

{
	int max=x;

	if(y>max)
	{
		max=y;
	}
	return max;
}
int min(int x,int y)
{
	int min=x;
	if(y<min)
	{
		min=y;
	}
	return min;
}