#include<stdio.h>
#include<stdlib.h>
int cmpl(const void*a,const void*b){
	return *(int *)b-*(int *)a;
}
int main()
{
	int d,i=0,j=1,k,t=1,cnt=0,flag;
	scanf("%d",&d);
	int *a=(int*)malloc(d*sizeof(int));
	int *b=(int*)malloc(d*sizeof(int));
	int *sum=(int*)malloc(d*sizeof(int));
	for(i=0;i<d;i++){
		scanf("%d",&a[i]);
		b[i]=0;
		sum[i]=0;
	}
	scanf("%d",&k);                                
    qsort(a,d,sizeof(a[0]),cmpl);                        //快速排序函数

	for(i=0;i<d-1;i+=t){
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