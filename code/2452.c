#include<stdio.h>
#include<math.h>
#include<string.h>
int N(int, int, int);
int M(int, int, int);
int H(int, int);
int A[1000];

int main()
{
	int n, l, r, K;
	int i, o;
	int b[1000], c[1000], d[1000], f[1000];
	int x;
	
	scanf("%d%d", &n, &K);
	for(i = 0;i<n;i++){
		scanf("%d", &A[i]);
	}
	for(i = 0;i<K;i++){
		scanf("%d%d", &d[i], &f[i]);
		}
	for(i = 0;i<K;i++){
	
	b[i] = N(d[i], f[i], n);
	c[i] = M(d[i], f[i], n);}
	for(i = 0;i<K;i++){
		if(b[i]>c[i]){
			x = H(c[i], b[i]);
			printf("%d\n", x);
		}
		else if(b[i]<=c[i]){
			x = H(b[i], c[i]);
			printf("%d\n", x);
		}
	}
	
	return 0;
}
//Fountion mdajn

int N(int l, int r, int n){
	int flag = 0;
	int o;
	for(o = l;o<=r;o++){
		flag = (A[o] + flag)%n;
	}
	flag = flag%n;
	return flag;
}
int M(int l, int r, int n){
	int flag = A[l]%n;
	int o;
	for(o = l + 1;o<=r;o++){
	flag =((flag%n)*A[o]%n)%n;
	}
	flag = flag%n;
	return flag;
}
int H(int l, int r){
	int temp = A[l];
	int o;
	if(r>l){
	
	for(o = l + 1;o<=r;o++){
		temp = temp^A[o];
	}}
	
	return temp;
}