#include<stdio.h>
int a[101];
int n;
int Niu(int l,int r);
int Mount(int l,int r);
int Huge(int l,int r);
int main()
{	
	int K,i;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(K--)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		int b,c,d,e,f;
		b=Niu(l,r);
		c=Mount(l,r);
		d=(b<c)?b:c;
		e=(b>c)?b:c;
		f=Huge(d,e);
		printf("%d\n",f); 
	}
	return 0;
}
int Niu(int l,int r)
{
	int j1,sum1=0,s1;
	for(j1=l;j1<=r;j1++){
		sum1=(sum1+a[j1])%n;
	}
	s1=sum1%n;
	return s1;
}
int Mount(int l,int r)
{
	int j2,sum2=1,s2;
	for(j2=l;j2<=r;j2++){
		sum2=(sum2*a[j2])%n;
	} 
	s2=sum2%n;
	return s2;
}
int Huge(int l,int r)
{
	int j3,sum3=a[l];
	for(j3=l+1;j3<=r;j3++){
		sum3=sum3^a[j3];
	}
	return sum3;
}