#include <stdio.h>

int niupple(int l,int r,int n,int a[]){
	int ret=0;
	int i;
	for(i=l;i<=r;i++){
		ret+=a[i];
		ret=ret%n;
	}
	
	return ret;
}

int mountmoov(int l,int r,int n,int a[]){
	int ret=1;
	int i;
	for(i=l;i<=r;i++){
		ret*=a[i];
		ret=ret%n;
	}
	
	return ret;
}

int hugegun(int l,int r,int a[]){
	int ret=a[l];
	int i;
	for(i=l+1;i<=r;i++){
		ret=ret^a[i];
	}
	return ret;
}

int main ()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[110];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans;
	for(i=0;i<k;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		int min=niupple(l,r,n,a),max=mountmoov(l,r,n,a);
		if(niupple(l,r,n,a)>mountmoov(l,r,n,a)){
			min=mountmoov(l,r,n,a);
			max=niupple(l,r,n,a);
		}
		ans=hugegun(min,max,a);
		printf("%d\n",ans);
	}
	
		
	return 0;
}