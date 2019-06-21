#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int H(int x,int y);
int N(int m);
int M(int m);
int max(int x,int y);
int min(int x,int y);
int n,k,a[101],l[101],r[101];
int main()
{
	scanf("%d%d",&n,&k);
	int j=0,i=0;
	
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);

	for(i=0;i<k;i++)
	scanf("%d%d",&l[i],&r[i]);

	for(i=0;i<k;i++)
	printf("%d\n",H(min(N(i),M(i)),max(N(i),M(i))));

	return 0;
}

int H(int x,int y)
		{
		int p;
		p=a[x];
		int i=x+1;
		for(i;i<=y;i++)
			p=p^a[i];
		return p;
		}
int N(int m)
		{
		int	p=0;	
		int i=l[m];
		for(i;i<=r[m];i++)
			p+=a[i];
		return p%n;
		}
int M(int m)
		{
		int j=1;
		int i=l[m];
		for(i;i<=r[m];i++)
		{
			j*=a[i];
			while(j>n)
				j-=n;
		}
	return j%n;	
		}
int max(int x,int y)
    {
    	int z;
    	if(x>y)
		z=x;
    	else z=y;
    	return(z);
	}
int min(int x,int y)
    {
    	int z;
    	if(x<y)
		z=x;
    	else z=y;
    	return(z);
	}