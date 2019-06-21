#include<stdio.h>
#define max_n 100
int a[max_n+5];
int n;
int main()
{
	int k,x1,x2,y1,y2; 
	scanf("%d%d",&n,&k);
	int l,r;
	int i;
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	while(k--){
	        scanf("%d%d",&l,&r);
			x1=niupple(l,r);x2=mountvoom(l,r);
			y1=min(x1,x2);y2=max(x1,x2);	
			printf("%d\n",huge(y1,y2));
	}
	
	return 0;
} 
int niupple(int l,int r){
	int i,niu=0;
	for(i=l;i<=r;i++){
	   niu=niu+(a[i]%n);niu=niu%n;
	}
	return niu;
}
int mountvoom(int l,int r){
	int i,mount=1;
	for(i=l;i<=r;i++){
		mount=mount*(a[i]%n);mount=mount%n;
	}
	return mount;
}
int min(int a,int b){
	int mi;
	if(a>b)mi=b;
	if(a<=b)mi=a;
	return mi;
}
int max(int a,int b){
	int ma;
	if(a>b)ma=a;
	if(a<=b)ma=b;
	return ma;
} 
int huge(int l,int r){
	int hu=0,i;
	for(i=l;i<=r;i++){
		hu=hu^a[i];
	}
	return hu;
}