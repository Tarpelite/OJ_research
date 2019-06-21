#include <stdio.h>;

void H(int n,int a[],int l,int r){
	int i,j,m=0,p=1,b,c,d,g;
	for(i=l;i<=r;i++){
		m=(m+(a[i]%n))%n;
		p=(p*(a[i]%n))%n;

		}
	c=m%n;
    d=p%n;
    if(c>d){
        g=c;
        c=d;
        d=g;}
        b=a[c];
	for(i=c+1;i<=d;i++){
		b=b^a[i];
	}
	printf("%d\n",b);
	return;
}

int main(){
	int i,n,K,j,l,r;
	scanf("%d%d",&n,&K);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<K;j++){
		scanf("%d%d",&l,&r);
		H(n,a,l,r);
	}
	return 0;
}