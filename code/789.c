#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Na(int,int,int*,int);
int Ma(int,int,int*,int);
int Ha(int,int,int*);

int main(int argc, char *argv[]) 
{ 
	int i,n,k,p,q;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
	    scanf("%d%d",&p,&q);
	    if(Na(p,q,a,n)>Ma(p,q,a,n))
	        printf("%d\n",Ha(Ma(p,q,a,n),Na(p,q,a,n),a));
	    else
	        printf("%d\n",Ha(Na(p,q,a,n),Ma(p,q,a,n),a));
	}
	return 0;
}

int Na(int x,int y,int *a,int z)
{
	int i,s=0;
    for(i=x;i<=y;i++)
	    s+=(*(a+i)%z);
	s%=z; 
	return s%z;
}
int Ma(int x,int y,int *a,int z)
{
    int i,s=1;
    for(i=x;i<=y;i++)
    {
        s*=(*(a+i)%z);
        s%=z;
	}
    s%=z;
    return s%z;
}
int Ha(int x,int y,int *a)
{
    int i,s=*(a+x);
    for(i=x+1;i<=y;i++)
        s=s^*(a+i);
    return s;
}