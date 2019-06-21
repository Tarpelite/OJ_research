#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int a[10000000];
int main(){
	int n,m,i,k; 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);//输入完成 
	for(i=10000000;i>=0;i--){
		if(a[i]>0){
			k--;
		}
		if(k==0){
			break;
		}
	}
	printf("%d %d",i,a[i]);	
	
	return 0;
 }