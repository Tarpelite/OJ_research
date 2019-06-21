#include <stdio.h>
int min(int,int);
int max(int,int);
int main()
{
	int n,K,a[23333],b[233],c[233],A,B,S;
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int g=0;g<K;g++)
	{
		scanf("%d %d",&b[g],&c[g]);
			int p1,s1=0;
			int r1=b[g];
			for(p1=0;p1<=c[g]-b[g];p1++)
			{
				s1=(s1+a[r1])%n;
				r1++;
			}
				int p2,s2=1;
				int r2=b[g];
				for(p2=0;p2<=c[g]-b[g];p2++)
				{
					s2=(s2*a[r2])%n;
					r2++;
				}	
			A=min(s1,s2);
			B=max(s1,s2);
				int p3,S=0;
				int r3=A;
				for(p3=0;p3<=B-A;p3++)
				{
					S=S^a[r3];
					r3++;
				}
			printf("%d\n",S);
	}
	return 0;
}
int max(int x,int y)
   {
   	int z;
   	if(x>y)z=x;
   	else z=y;
   	return(z);
   }
int min(int x,int y)
   {
   	int z;
   	if(x<y)z=x;
   	else z=y;
   	return(z);
   }