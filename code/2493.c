#include <stdio.h>
#include <stdlib.h>
int comp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
} 
void sort(int a[],int n);
int a[10000000];
int b[10000000];
int cnt[10000000];
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	qsort(a,n,sizeof(int),comp);
	b[0]=a[0];
	cnt[0]=1;
	for(i=1,j=1;i<n;i++){
		cnt[j]=1;
		b[j]=a[i];
		if(a[i]==a[i-1]){
			j--;
			cnt[j]++; 
		}
		j++;
	}
	printf("%d %d",b[j-k],cnt[j-k]);
	return 0;
}