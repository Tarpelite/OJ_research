#include <stdio.h>
#include<math.h>
#include<string.h>

int N(int,int);
int M(int,int);
int H(int,int);
int min(int,int);
int max(int,int);
int n,a[100];

int main( )
{
	int k,i,m;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	int b[k][3];
	for(i=0;i<k;i++)scanf("%d%d",&b[i][1],&b[i][2]);
	for(i=0;i<k;i++){
	    m=H(min(N(b[i][1],b[i][2]),M(b[i][1],b[i][2])),max(N(b[i][1],b[i][2]),M(b[i][1],b[i][2])));
	    if(i==k-1)printf("%d",m);
	    else printf("%d\n",m);
	}
	return 0;
}

int N(int l,int r)
{
    int i,s=0;
    for(i=l;i<=r;i++) s=s+a[i]%n;
    s=s%n;
    return s;
}

int M(int l,int r)
{
    int i,s=1;
    for(i=l;i<=r;i++) s=s*a[i]%n;
    s=s%n;
    return s;
}

int H(int l,int r)
{
    int i,s=1;
    if(l==r)s=a[l];
    else {
        s=a[l]^a[l+1];
        for(i=l+1;i<r;i++)s=s^a[i+1];
    }
    return s;
}

int min(int a,int b)
{
    if(a>b) a=b;
    return a;
}

int max(int a,int b)
{
    if(a>b) b=a;
    return b;
}