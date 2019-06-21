#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
int main(){
	int n,k,m,temp;
	scanf("%d",&n);
	int a[n];
	int i=0,j=1,x=0,y=0,b=0,flag=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	qsort(a,n,sizeof(int),comp);
	for(y=n-2;y>=0;--y){
		if(a[y]<a[y+1]){
			flag++;
		}
		if(flag==k){
			m=a[y];
			b++;
		}
		if(flag>k){
			break;
		}
	}
	printf("%d %d",m,b);
	return 0;
}