#include<stdio.h>
#include<stdlib.h>
int cmpl(const void*a,const void*b){
	return *(int *)b-*(int *)a;
}
int main()
{
	int n,i=0,j=1,k,t=1,cnt=0,flag;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	int *b=(int*)malloc(n*sizeof(int));
	int *sum=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=0;
		sum[i]=0;
	}
	scanf("%d",&k);                                
    qsort(a,n,sizeof(a[0]),cmpl);                        //快速排序函数

	for(i=0;i<n-1;i+=t){
		t=1;
		for(j=i+1;a[i]==a[j];j++)
			t++;
		b[cnt]=a[i];
		sum[cnt]=t;
		cnt++;
	}
	printf("%d %d",b[k-1],sum[k-1]);
	free(a);
	free(b);
	free(sum);
	return 0;
}