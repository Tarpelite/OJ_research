#include<stdio.h>
int a[105];
int b[10005][2];
int n,k;
int s(int l,int r){
	int sum=0;
	for(int i=l;i<=r;i++){
		sum=sum+a[i];
	}
	return sum%n;
	}
int m(int l,int r)
{
	int sum=1;
	for(int i=l;i<=r;i++){
		sum=sum*a[i];
		if(sum>n)
		sum%=n;
	}
	return sum;
} 
int h(int l,int r){
	int sum=a[l];
	for(int i=l+1;i<=r;i++){
		sum=sum^a[i];
	}
	return sum;
}
int is_da(int a,int b){
	if(a>=b)
	return a;
	else
	return b;
}
int is_xiao(int a,int b){
	if(a>=b)
	return b;
	else
	return a;
}
int main(){
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<k;i++){
		scanf("%d%d",&b[i][0],&b[i][1]);
	}
	int xiao;
	int da;
	int result;
for(int i=0;i<k;i++){
	xiao=is_xiao(s(b[i][0],b[i][1]),m(b[i][0],b[i][1]));
	da=is_da(s(b[i][0],b[i][1]),m(b[i][0],b[i][1]));
	result=h(xiao,da);
	printf("%d\n",result); 
}
return 0;
}