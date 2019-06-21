#include <stdio.h>
int a[105],n,k;
int nf(int,int);
int mf(int,int);
int hf(int,int);

int main(){
	scanf("%d%d",&n,&k);
	int j=0,r,l,n1,m,h,max,min;
	for(j=0;j<=n-1;j++){
		scanf("%d",&a[j]);
	}
	for(j=1;j<=k;j++){
		scanf("%d%d",&l,&r);
		m=mf(l,r);
		n1=nf(l,r);
		if(m>=n1){
			max=m;
			min=n1;
		}
		else{
			max=n1;
			min=m;
		}
		h=hf(min,max);
		printf("%d\n",h);
	}
	return 0;

}
int nf(int x,int y){
	int i,sum=0;
	for(i=x;i<=y;i++){
		sum=sum+a[i];
	}
	sum=sum%n;
	return sum;
}

int mf(int x,int y){
	int i,sum=1;
	for(i=x;i<=y;i++){
		sum=sum*a[i];
		sum=sum%n;
	}
	return sum;
}

int hf(int x,int y){
	int i,sum=0;
	for(i=x;i<=y;i++){
		sum=sum^a[i];
	}
	return sum;
}