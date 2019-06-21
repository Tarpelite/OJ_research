#include<stdio.h>
int N(int l, int r);
int M(int l, int r);
int H(int l, int r);
int a[2000],n;
int main()
{
	int k,l[101],r[101];
	scanf("%d%d",&n,&k);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=k;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	int max,min;
	for(i=1;i<=k;i++){
		if(N(l[i],r[i])>M(l[i],r[i])){
			max=N(l[i],r[i]);
			min=M(l[i],r[i]);
		}
		else{
			max=M(l[i],r[i]);
			min=N(l[i],r[i]);
		}
		printf("%d\n",H(min,max));
	}
	
	return 0;
}
int N(int l, int r)
{
	int s=0,i;
	for(i=l;i<=r;i++) {
		s=s+(a[i]%n);
		s=s%n;
	}
	return s;
}
int M(int l, int r){
	int s=1,i;
	for(i=l;i<=r;i++) {
		s=s*(a[i]%n);
		s=s%n;
	}
	return s;
}
int H(int l, int r){
	int s=a[l],i;
	for(i=l+1;i<=r;i++) {
		s=s^a[i];
	}
	return s;
}