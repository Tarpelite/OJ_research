#include<stdio.h>
#define min(x,y) x<y?x:y
#define max(x,y) x>y?x:y
int main()
{
	int n,k,i,j,l,r,p,q,x;
	int a[105];
	int b[105];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[i]=x;
	}
	for(j=0;j<k;j++){
		scanf("%d%d",&l,&r);
		int sum=0;
		for(i=l;i<=r;i++){
		sum=sum+a[i];
	}
	int multi=1;
	for(i=l;i<=r;i++){
		multi=multi%n;
		b[i]=a[i]%n;
		multi=multi*b[i];
	}
		p=min(sum%n,multi%n);
		q=max(sum%n,multi%n);
		int plusor=a[p];
		if(p==q)printf("%d\n",plusor);
		else {
		for(i=p+1;i<=q;i++){
		plusor=plusor^a[i];
	}
		printf("%d\n",plusor);
		}
	} 
	return 0;
 }