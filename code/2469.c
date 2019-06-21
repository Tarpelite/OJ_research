#include<stdio.h>
#include<stdlib.h>
int a[10000000];
int cmp1(const void *a,const void *b)
{
	return *(int *)b-*(int*)a;
}
int main()
{
	int n,k,i,j,b,c=1,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	qsort(a,n,sizeof(a[0]),cmp1);
	for(j=0;j<n;j++){
		if(a[j+1]!=a[j])
			c++;
		if(c==k){
			d++;
		
		}
		if(c==k+1)
			break;
	}
	printf("%d %d",a[j],d);
	return 0;
}