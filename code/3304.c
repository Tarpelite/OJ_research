#include<stdio.h>
#include<stdlib.h>
int a[10000002];
int cmp( const void *a , const void *b ) {
	return *(int *)b - *(int *)a;
}
int main() {
	int n,k;
	int i=0,j=0;
	int t=1,count=0,flag=0;
	scanf("%d",&n);
	while(i<n) {
		scanf("%d",&a[i]);
		i++;
	}
	qsort(a,n,sizeof(int),cmp);
	scanf("%d",&k);
	for(i=1; t!=k; i++) {
		if(a[i]<a[i-1]) {
			t++;
		}
	}
	for(i=i-1; a[i]==a[i+1]; i++) {
		count++;
	}
	count = count+1;
	flag=a[i];
	     printf("%d %d",flag,count);
	return 0;
}