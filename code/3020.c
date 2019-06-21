#include<stdio.h>
int fn(int[],int,int,int);
int fm(int[],int,int,int);
int fh(int[],int,int);
int main(){
	int n,k,i=0,z=0;
	int l,r,x,y,max,min,u;
	int a[101];
	scanf("%d%d",&n,&k);
	for(i;i<n;i++)
	scanf("%d",&a[i]);
	while(z<k){
		scanf("%d%d",&l,&r);
		x=fn(a,l,r,n);
		y=fm(a,l,r,n);
		max=x,min=y;
		if(y>x)
		max=y,min=x;
		u=fh(a,min,max);
		printf("%d\n",u);
		z++;
	}
	return 0;
}
int fn(int b[101],int c,int d,int o){
	int sum=0;
	for(c;c<=d;c++)
	sum+=b[c];
	sum=sum%o;
	return sum;
}
int fm(int e[101],int f,int g,int p){
	int sum=1;
	for(f;f<=g;f++)
	sum=sum*e[f]%p;
	return sum;
}
int fh(int h[101],int i,int j){
	int sum;
    sum=h[i];
    for(i=i+1;i<=j;i++)
	sum=sum^h[i];
	return sum;
}