#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int M(int l,int r,int a[],int n)
{
	int sum=1;
	for(int i=l;i<=r;i++){

	sum=sum*a[i];
	sum=sum%n;}
	return sum;
}

int N(int l,int r, int a[], int n)
{
    int sum=0;
    for(int i=l; i<=r; i++)
    {
        sum=sum+a[i];
    }
    return sum%n;

}
int H(int l,int r,int a[], int n)
{
    int h,i;
    for(i=l+1,h=a[l]; i<=r; i++)
    {
        h^=a[i];
    }
    return h;
}

int main()
{
    int n,k,b,c,d,i,j,answer;
    int a[100],l[100],r[100];
    scanf("%d%d",&n,&k);
     for(i=0; i<n; i++)
    {
        scanf("%d",&b);
        a[i]=b;
    }

    for(j=0; j<k; j++)
    {
        scanf("%d%d",&c,&d);
        l[j]=c;
        r[j]=d;
    }
    for(j=0; j<k; j++)
    {
        answer= H(min(N(l[j],r[j],a,n),M(l[j],r[j],a,n)),max(N(l[j],r[j],a,n),M(l[j],r[j],a,n)),a,n);
        printf("%d\n",answer);
    }
    return 0;
}