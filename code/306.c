#include<stdio.h>
#include<stdlib.h>
int cmpl(const void*a,const void*b){
	return *(int *)b-*(int *)a;
}
int main()
{
	int x,i=0,j=1,k,t=1,cnt=0,flag;
	scanf("%d",&x);
	int *a=(int*)malloc(x*sizeof(int));
	int *b=(int*)malloc(x*sizeof(int));
	int *sum=(int*)malloc(x*sizeof(int));
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
		b[i]=0;
		sum[i]=0;
	}
	scanf("%d",&k);                                
    qsort(a,x,sizeof(a[0]),cmpl); 

	for(i=0;i<x-1;i+=t){
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