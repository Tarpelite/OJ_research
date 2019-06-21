#include <stdio.h>
int A[100]={0};
int n;
int N(int l,int r)
{   int i,x=0;
    for(i=l;i<=r;i++)
    x+=A[i];
    return x%n;
}
int M(int l,int r)
{   int i,x=1;
    for(i=l;i<=r;i++)
    {x*=A[i];
    while(x>n)
    x-=n;}
	 return x%n;}
int H(int l,int r)
{   int i,x=0;
    for(i=l;i<=r;i++)
	x=x^A[i];
	return x; 
}
int max(int a,int b)
{   if(a>b)
    return a;
    else 
    return b;
}
int min(int a,int b)
{   if(a>b)
    return b;
    else
    return a;
}
int main()
{int l[100]={0},r[100]={0},result[100]={0}; 
    int k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<=n-1;i++)
    scanf("%d",&A[i]);
    for(i=0;i<=k-1;i++)
    {scanf("%d %d",&l[i],&r[i]);}
	for(i=0;i<=k-1;i++)
	{result[i]=H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i])));
    printf("%d\n",result[i]);}	
	return 0;
}