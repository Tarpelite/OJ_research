#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int arr[100],n;
int N(int,int);
int M(int,int);
int H(int,int);
int max(int,int);
int min(int,int);

int main(){
	int K,l,r,Ni,Mo,Hu[100],mi,ma;
	scanf("%d%d",&n,&K);
	for(int j=0;j<n;j++)
	scanf("%d", &arr[j]);
	for(int i=0;i<K;i++){
	scanf("%d%d",&l,&r);
	Ni=N(l,r);
	Mo=M(l,r);
    mi=min(Ni,Mo);
    ma=max(Ni,Mo);
    Hu[i]=H(mi,ma);
}
	for(int k=0;k<K;k++)
	printf("%d\n",Hu[k]);
	return 0;
} 

int N(int l,int r){
	int s=0;
	for(int i=l;i<=r;i++){
	s=s+arr[i];
	s=s%n;}
	return s;
}
int M(int l,int r){
	int s=1;
	for(int i=l;i<=r;i++){
	s=s*arr[i];
	s=s%n;}
	return s;
}
int H(int l,int r){
	int s=0;
	for(int i=l;i<=r;i++)
	s=s^arr[i];
	return s;
}
int max(int a,int b){
	if(a>b)
	return a;
	else
	return b;
}
int min(int a,int b){
	if(a>b)
	return b;
	else
	return a;
}