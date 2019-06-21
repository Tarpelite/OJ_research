#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main ()
{
	int a;
	scanf ("%d",&a);
	int z[a];
	int i;
	for (i=0;i<a;i++)
	z[i]=0;
	i=0;
	while (i<a)
	{
		scanf ("%d",&z[i]);
		i++;
	}
	int cmp ();
	qsort(z,a,sizeof(int),cmp);
	int c;
	scanf("%d",&c);
	int d=a-1;
	int x=1;
	while (x!=c)
	{
		if (z[d]!=z[d-1])
		x=x+1;
		d=d-1;
	}
	int y=z[d];
	printf("%d",z[d]);
	int count=0;
	i=0;
	while (i<a)
	{
		if (z[i]==y)
		count=count+1;
		i++;
	}
	printf(" %d",count);
	return 0;
}
int cmp (const void *a, const void *b)
{
	return(*(int *)a-*(int *)b);
}