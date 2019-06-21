#include<stdio.h>
int a[10001];
int h[101];
int l[101],r[101];
int n,K,i,j;
int main()
{
    int N(int q,int b);
	int M(int q,int b);
	int H(int q,int b);
	int max(int x,int y);
	int min(int x,int y);
	int n_min=2147483647;
	int n_max=0;
	int m_min=2147483647;
	int m_max=0;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<K;i++)
	    	scanf("%d%d",&l[i],&r[i]);
	for(j=0;j<K;j++)    	
			h[j]=H(min(N(l[j],r[j]),M(l[j],r[j])),max(N(l[j],r[j]),M(l[j],r[j])));
	for(i=0;i<K;i++)
	printf("%d\n",h[i]);
	return 0;  
} 
int max(int x,int y)
{
	return x>=y?x:y;
}	
int min(int x,int y)
{
	return x<=y?x:y;
}
int N(int q,int b)
{
	int NN=0;
	for(i=0;i<=b-q;i++)
	NN=NN+a[q+i];
    return NN%n;
}
int M(int q,int b)
{
	int MM=1;
	for(i=0;i<=b-q;i++)
	MM=MM*a[q+i]%n;
	return MM;
}
int H(int q,int b)
{
	int HH=a[q];
	for(i=1;i<=b-q;i++)
	HH=HH^a[q+i];
	return HH;
}