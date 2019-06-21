#include<stdio.h>
int a[10001];
int H(int x,int y,int c[]){
	int p,s3=0;
	for(p=x;p<=y;p++)
		s3=s3^c[p];
	return s3;
}
int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<k;j++){
		int l,r,m;
		scanf("%d %d",&l,&r);
		long s1=0,s2=1;
		for(m=l;m<=r;m++)
			s1=(s1+a[m])%n;
		for(m=l;m<=r;m++)
			s2=(s2*a[m])%n;
		if(s1<s2)
			printf("%d\n",H(s1,s2,a));
		else
			printf("%d\n",H(s2,s1,a));
	}
	return 0;
 }