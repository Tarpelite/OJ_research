#include <stdio.h>
int a[1000001];
int main()
{
	int n,i,k,m,p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	m=a[0];
	for(i=1;i<n;i++){
		if(a[i]>m) m=a[i];
	}
	while(k!=1){
		m--;
		for(i=0;i<n;i++){
			if(m==a[i]) break;
		}
		if(m==a[i]) k--;
	}
	p=0;
	for(i=0;i<n;i++){
		if(m==a[i]) p++;
	}
	printf("%d %d",m,p);
	return 0;
 }