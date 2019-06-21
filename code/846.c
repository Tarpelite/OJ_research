#include<stdio.h>
#define N 100001
int main()
{
	int n,k,i,j,b,c=0;
	int a[N][2];
	scanf("%d",&n);
	for(i=0;i<N;i++){
	    for(j=0;j<2;j++){
		a[i][j]=0;
		}
	}	
	while(n--){
		scanf("%d\n",&b);
		a[b][0]=b;
		a[b][1]++;
	}
	scanf("%d",&k);
	for(i=N-1;i>0;i--){
		if(a[i][0]!=0){
			c++;
			if(c==k){
				printf("%d %d",a[i][0],a[i][1]);
				break;
			}
		}
	}
	return 0;
}