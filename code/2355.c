#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}
int main(){
	int n,k;
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	qsort(&a[1],n,sizeof(a[0]),cmp);
	int x=1,i=2,ans;
	scanf("%d",&k);
	for(;i<=n;i++){
		if(a[i-1]==a[i])
		continue;
		else x++;
		if(x==k){
		ans=a[i];
		break;
		}
	}
	int num=0;
	for(i=1;i<=n;i++){
		if(a[i]==ans)
		num++;
	}
	printf("%d %d",ans,num);
	return 0;
}