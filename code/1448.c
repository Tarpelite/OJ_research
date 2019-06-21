#include<stdio.h>
int a[100]={0},n;
int N(int l,int r){
	int sum=0;
	for(int i=l;i<=r;i++)
	sum=(sum+a[i])%n;
	return sum;
}
int M(int l,int r){
	int sum=1;
	for(int i=l;i<=r;i++)
	sum=(sum*a[i])%n;
	return sum;
}
int H(int l,int r){
	int sum=0;
	for(int i=l;i<=r;i++)
	sum=sum^a[i];
	return sum;
}
int min(int a,int b){
	if(a<b)
	return a;
	else return b;
}
int max(int a,int b){
	if(a<b)
	return b;
	else return a;
}
int main(){
	int l[100]={0},r[100]={0}; 
	int K;
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=K;i++)
	scanf("%d %d",&l[i],&r[i]);
	for(int i=1;i<=K;i++)
	printf("%d\n",H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i]))));
	return 0;
}