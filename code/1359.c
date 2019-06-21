#include<stdio.h>
int a[100001];//定义全局数组，容量能更大！ 
int main()
{
	int n,i,j,k,l=100000;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		a[j]++;
	}
	scanf("%d",&k);
	while(k>0){
		if(a[l]!=0)
			k--;
			l--;//这个排序方法值得专研，不太懂。。。 
	}
	l++;
	printf("%d %d",l,a[l]);
	return 0;
}