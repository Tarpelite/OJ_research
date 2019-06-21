#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int N(int a,int b,int p[],int n);
int M(int a,int b,int p[],int n);
int l(int a,int b,int p[]);
int min(int a,int b);
int max(int a,int b); 
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[100]={0};
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[100][2];
	for(i=0;i<k;i++){
		scanf("%d %d",&b[i][0],&b[i][1]);
	}
	for(i=0;i<k;i++){
		int x=min(N(b[i][0],b[i][1],a,n),M(b[i][0],b[i][1],a,n));
		int y=max(N(b[i][0],b[i][1],a,n),M(b[i][0],b[i][1],a,n));
		printf("%d\n",l(x,y,a));
	}

	 
	return 0;
}
int N(int a,int b,int p[],int q){
	int i;
	int sum=0;
	for(i=a;i<=b;i++){
		sum+=p[i];
	}
	return sum%q;	
}
int  M(int a,int b,int p[],int q){
	int i;
	
	if(a==b)
	return p[a]%q;
	int w=(p[a]%q)*(p[a+1]%q)%q;
	for(i=a+2;i<=b;i++){
		w=(w*(p[i]%q))%q;
	}
	return w;
	
}
int  l(int a,int  b,int p[]){
	int i;
	if(a==b)
	return p[a];
	int m=p[a]^p[a+1];
	for(i=a+2;i<=b;i++){
		m=m^p[i];
	}
	return m;
}
int  min(int a,int b){
	int i=a;
	if(i>b)
	i=b;
	return i;
}
int  max(int a,int b){
	int i=a;
	if(i<b)
	i=b;
	return i;
}