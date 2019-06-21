#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int max(int a,int b);
int min(int a, int b);
int a[23333],n;
int K,B,l,r;

int main()
{
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<K;i++){
		scanf("%d %d",&l,&r);
		B=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		printf("%d\n",B);
	}
	return 0;
}

int N(int l,int r){
	int sum=0;
	for (int i=l; i<=r;i++)
		sum=(sum+a[i])%n;
	return sum;

}

int M(int l,int r){
	int ji=1;
	for (int i=l; i<=r;i++)
		ji=(ji*a[i])%n;
	return ji;
}

int H(int l,int r){
	int yi=0;
	for (int i=l; i<=r;i++)
		yi=yi^a[i];
	return yi;
}

int max(int a,int b){
	return a > b? a : b;
}

int min(int a, int b){
	return a < b? a : b;
}