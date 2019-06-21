#include <stdio.h>
#define D 10086110
int a[10000110];

int main(){
	int n,k,i,j,b,temp;
	scanf("%d",&n);
	for(i=0;i<=1000001;i++){
		a[i]=0;
	}
	for(i=1;i<=n;i++){
		scanf("%d",&b);
		a[b]++;
	}
	scanf("%d",&k);
	i=0;
	
		for(j=1000000;j>0;j--){
			if(a[j]!=0){
				i++;
			if(i==k)
			break;
		}
	}
	printf("%d %d",j,a[j]);
	return 0;
	}