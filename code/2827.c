#include<stdio.h>
int a[100005];
int main()
{
	int n,k,i,j,x=0,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		a[j]+=1;
	}
	scanf("%d",&k);
	for(i=100000;i>=0;i--){
	    if(a[i]!=0) x+=1;
		if(x==k){
			printf("%d %d\n",i,a[i]);
			break;
		}
	}
	return 0; 
}