#include<stdio.h>
int main()
{
	int a[1000],b,c,d,m,n,o[100],p,q,r,i=0,j=0;
	scanf("%d%d",&m,&n);
	while(i<m)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	while(i<n)
	{
		scanf("%d%d",&p,&q);
		j=p;
		b=0;
		while(j<=q)
		{
			b=b+(a[j]%n);
			j++;
		}
		b=b%n;
		j=p;
		c=1;
		while(j<=q)
		{
			c=c*(a[j])%n;
			j++;
		}
		c=c%n;
		if(b>c)
		{
			d=b;
			b=c;
			c=d;
		}
	
			j=b;
			d=a[j];
			while(j<c)
			{
				d=d^a[j+1];
				j++;
			}
			o[i]=d;
		
		i++; 
	}
	i=0;
	while(i<n)
	{
		printf("%d\n",o[i]);
		i++;
	}
}