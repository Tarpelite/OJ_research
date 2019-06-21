#include<stdio.h>

int main()
{
	int a,b,i,k,z=0,x=1,q,b1;
	scanf("%d%d",&a,&b);
	int m[101]={0},n[101]={0},o[101]={0};
	for(i=0;i<a;i++)
	scanf("%d",&m[i]);
	for(i=0;i<b;i++)
	scanf("%d%d",&n[i],&o[i]);
	
	for(k=0;k<b;k++)
	{
		for(i=n[k];i<=o[k];i++)
		z = (z+m[i])%a;
		z = z%a;
		for(i=n[k];i<=o[k];i++)
		x = (x*m[i])%a;
		x = x%a;
		if(z>x)
		{
			b1 = x;
			x = z;
			z = b1;
		}
		if(z==x)
		printf("%d\n",m[z]);
		else
		{
			q = m[z];
			for(i=z+1;i<=x;i++)
			q = q^m[i];
			printf("%d\n",q);
			
		}
			z = 0;
			x = 1;
	}
	return 0;
	
}