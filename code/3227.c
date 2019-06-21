#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b)
{
	return(*(int*)a-*(int*)b);
}
int main()
{
	long long n,a[1000000];
	scanf("%lld",&n);
	long long i;
	for(i=0;i<n;++i){
		scanf("%lld",&a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	long long k;
	scanf("%lld",&k);
	int num=0;
	int count=0;
	int max=a[n-1],mark;
	for(i=n-2;i>=0;--i){
		if(a[i]<max){
			++count;
			max=a[i];
		}if(count==k-1)
			break;
	}printf("%d ",max);
	mark=i;
	for(i=mark-1;i>=0;--i){
		if(a[i]==a[mark])
			++num;
		else
			break;
	}printf("%d",num+1);
	return 0;
}