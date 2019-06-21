#include <stdio.h>
int n;
int a[100]={0};
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int max(int b,int c);
int min(int b,int c);
int main(void)
{
	int K,i,l[100]={0},r[100]={0};
	int result[100]={0};
	scanf("%d %d",&n,&K);
	for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
	for(i=0;i<=K-1;i++)
	    scanf("%d %d",&l[i],&r[i]);
    for(i=0;i<=K-1;i++){
	    result[i]=H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i])));
	printf("%d\n",result[i]);
	}

    return 0;
} 
int N(int l,int r)
{
	int i,E=0;
	for(i=l;i<=r;i++)
	    E+=a[i];
	return E%n;
}
int M(int l,int r)
{
	int i,E=1;
	for(i=l;i<=r;i++){
	    E*=a[i];
	while (E>n)
	    E-=n;
	}
	return E%n;
}
int H(int l,int r)
{
	int i,E=0;
	for(i=l;i<=r;i++)
	    E=E^a[i];
    return E;
}
int max(int b,int c)
{
	if(b>=c)
	    return b;
	else
	    return c;
}
int min(int b,int c)
{
	if(b<=c)
	    return b;
	else
    	return c;
}