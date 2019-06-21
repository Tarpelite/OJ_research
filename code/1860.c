#include <stdio.h>
int n,K;
int num[105];
int res[105];
int Nlr(int l,int r){
	int sum=0;
	int i;
	for(i=l;i<=r;i++){
		sum+=num[i];
	}
	return sum%n;
}
int Mlr(int l,int r){
	int ret=1;
	int i;
	for(i=l;i<=r;i++){
		ret*=num[i];
		if(ret%n==0) return 0;
		while(ret>n) ret=ret%n; 
	}
	return ret;
}
int Hlr(int l,int r){
    int i,ret=num[l];
    if(r>l){
    	for(i=l+1;i<=r;i++){
    		ret=ret^num[i];
		}
	}
	return ret;
}
int main(){  
	int l,r,i,cnt=0;
	int ret;
	int r1,r2,x,y;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<K;i++){
		scanf("%d%d",&l,&r);
	    x=Nlr(l,r),y=Mlr(l,r);
	    r1=(x>y)?y:x;
	    r2=(x>y)?x:y;
	    ret=Hlr(r1,r2);
        res[i]=ret;
	}
	for(i=0;i<K;i++){
		printf("%d\n",res[i]);
	}
	return 0;
}