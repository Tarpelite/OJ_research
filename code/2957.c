#include <stdio.h>
int max(int,int);
int min(int,int);
int N(int,int,int[]);
int M(int,int,int[],int);
int H(int,int,int[]);
int main(){
	int n,k,l,r;
	int a[110],ans[110];
	int i;
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		ans[i]=H(min(N(l,r,a)%n,M(l,r,a,n)),max(N(l,r,a)%n,M(l,r,a,n)),a);
	}
	for (i=0;i<k;i++){
		printf("%d\n",ans[i]);
	}
	return 0;
} 
int min(int x,int y){
	if (x>y){
		return y;
	}
	return x;
}
int max(int x,int y){
	if (x>y){
		return x;
	}
	return y;
}
int N(int x,int y,int b[]){
	int ans=0,i;
	for (i=x;i<=y;i++){
		ans+=b[i];
	}
	return ans;
}
int M(int x,int y,int b[],int n){
	int ans=1,i;
	for (i=x;i<=y;i++)
		ans=((ans%n)*(b[i]%n))%n;
	return ans;
}
int H(int x,int y,int b[]){
	int ans,i;
	for (i=x+1,ans=b[x];i<=y;i++){
		ans^=b[i];
	}
	return ans;
}