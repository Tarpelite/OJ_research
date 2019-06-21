#include<stdio.h>
int a[100];
int n;
int y(int,int);
int m(int,int);
int h(int,int);
int min1(int,int);
int max1(int,int);
int main()
{
    int k;
	scanf("%d %d",&n,&k);
	int b[k],l,r,min,max,x1,x2,x3;
	for(int p=0;p<n;p++){
		scanf("%d",&a[p]);
	}
	for(int i=0;i<k;i++){
		scanf("%d %d",&l,&r);
		if(l<=r&&l>=0&&r<n){
			x1=y(l,r);
			x2=m(l,r);
			min=min1(x1,x2);
			max=max1(x1,x2);
			x3=h(min,max);
			b[i]=x3;
		}
		else return 0;
	}
	printf("%d",b[0]);
	for(int j=1;j<k;j++){
		printf("\n%d",b[j]);
	}
	return 0;
}
int y(int l,int r){
	int z=0;
	for(;l<=r;l++){
		z=z+a[l];
	}
	return z%n;
}
int m(int l,int r){
	int z=1;
	for(;l<=r;l++){
		z=z*a[l];
		z=z%n;
	}
	return z%n;
}
int h(int l,int r){
	int z;
	z=a[l];
	l=l+1;
	for(;l<=r;l++){
		z=z^a[l];
	}
	return z;
}
int min1(int l,int r){
	if(l>r)
	return r;
	else return l;
}
int max1(int l,int r){
	if(l>r)
	return l;
	else return r;
}