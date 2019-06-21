#include <stdio.h>
int a[10000]={0},n=0;
int F(int l,int r){
	int i,result=0;
	for(i=l;i<=r;i++){
		result=result^a[i];
	}
	return result;
}
int N(int l,int r){
	int i,result=0;
	for(i=l;i<=r;i++){
		result=(result+a[i])%n;
	}
	return result;
}
int M(int l,int r){
	int i,result=1;
	for(i=l;i<=r;i++){
		result=(result*a[i])%n;
	}
	return result;
}
int max(int a,int b){
	int result=0;
	if(a>b)
	    result=a;
	else
	    result=b;
	return result;
}
int min(int a,int b){
	int result=0;
	if(a<b)
	    result=a;
	else
	    result=b;
	return result;
}
int main()
{
	int K,l[100]={0},r[100]={0},i=0;
	scanf("%d %d",&n,&K);
	int b[100]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<K;i++){
		scanf("%d %d",&l[i],&r[i]);
	}
	for(i=0;i<K;i++){
		b[i]=F(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i])));
		printf("%d\n",b[i]);
	}
	return 0;
 }