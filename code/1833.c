#include<stdio.h>
 int a[100];
 int Nlr(int n,int l, int r)  								
 {	
 	int nlr=0;
    int i;
 	for(i=l ;i<=r; i++)
 	{
 		nlr+=(a[i]);
	}
	return nlr=nlr%n;
 }

 int Mlr(int n,int l, int r)
 {
  int mlr=1;
  int i;
  for(i=l ;i<=r; i++)
  {
  	mlr*=(a[i]);
  	if(mlr>n) mlr%=n;
  }
	return mlr;	
 }
 
 int H(int l,int r)
 {	
 	int hlr=a[l];
 	int i;
 	for(i=l+1 ;i<=r; i++)
 	{
 		hlr=a[i] ^ hlr;
	}
	 return hlr;
 }
 
int main()
{
	int n,k,l,r;
	scanf("%d%d",&n,&k);
	int j;
	for( j=0;j<n; j++)
	{
		scanf("%d",&a[j]);
	}
	int s;
	int result[100];
	for(s=1; s<=k; s++)
	{
		scanf("%d%d",&l,&r);
		Nlr(n,l,r);
		Mlr(n,l,r);
		int min=Nlr(n,l,r);
		int max=Mlr(n,l,r);
		if(min>max)
		{
			min=Mlr(n,l,r);
			max=Nlr(n,l,r);
		}
	result[s]=H(min,max);
	 } 
	 for(s=1; s<=k; s++)
	 printf("%d\n",result[s]);
return 0;
 }