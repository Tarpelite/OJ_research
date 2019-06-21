#include<stdio.h>
int a[100000];

int main(){
	int i=0;
	int n=0;
	int s=0;
	int k=0,p=0;
	int count=0;
	int max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&s);
		a[s]++;
		if(max<=s){
			max=s;
		}
	}
	scanf("%d",&p);
	for(i=max;count!=p;i--){
		if(a[i]>0){
			count++;
		}
	}
	printf("%d %d",i+1,a[i+1]);
	return 0; 
}