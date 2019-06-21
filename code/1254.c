#include<stdio.h>
int main()
{
	int i, p, n, k, max=0, a[100001]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&p);
		a[p]++;
		if(p>max)
			max=p;
	}
	scanf("%d",&k);
	for(i=max,p=0;i>0;i--){
		if(a[i]>0)
			p++;
		if(p==k)
			break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}