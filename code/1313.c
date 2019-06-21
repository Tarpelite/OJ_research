#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b){
	return *(int*)b-*(int*)a;
}
int a[1000000];
int main(){
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int k;
	scanf("%d",&k);
	qsort(a,n,sizeof(a[0]),cmp);
	int p=0,count=1,now2,count2;
	int now=a[0];
	for(int i=1;i<n;i++){
		if(a[i]!=now){
			p++;
			now=a[i];
			count=1;
		}
		else{
			count++;
		}
		if(p==k) break;
		now2=now;
		count2=count;
	}
	printf("%d %d",now2,count2);
	return 0;
}