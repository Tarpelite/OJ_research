#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a ,const void *b){
	return (*(int*)b-*(int *)a);
}
int a[10000000]={0},b[100000]={0};
int main(){
	int n,k,l,j=0,zj;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&l);
		if(b[l]) b[l]++;
		else{
			b[l]++;
			a[j++]=l;
		}
	}
	scanf("%d",&k);
	qsort(a,j,sizeof(int ),cmp);
	/*for(int i=1;i<=j;i++){
		for(int x=i;x<=j;x++){
			if(a[i]<a[x]){
				zj=a[i];
				a[i]=a[x];
				a[x]=zj;
			}
		}
	}*/
	printf("%d %d",a[k-1],b[a[k-1]]);
}