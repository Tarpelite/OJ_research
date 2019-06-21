#include<stdio.h>
int N[10000], M[10000], H[10000],a[10000],l[10000], r[10000];
int Nope(int a[], int, int);
int Mom(int a[], int, int, int);
int Hello(int a[], int, int);
int max(int, int);
int min(int, int); 
int main(){
	int n, K, i;
	scanf("%d%d", &n, &K);
	for(i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
    for(i = 0 ; i < K ; i++){
    	scanf("%d%d", &l[i], &r[i]);
        N[i] = Nope(a, l[i], r[i]) % n;
    	M[i] = Mom(a, l[i], r[i], n);
    }
	for(i = 0 ; i < K ; i++){
		printf("%d\n", H[i] = Hello(a, min(N[i], M[i]), max(N[i], M[i])));
	}
	return 0;
}
int Nope(int a[], int x, int y){
	int i, res1 = 0;
	for(i = x ; i <= y ; i++){
		res1 += a[i];
	}
	return res1;
}
int Mom(int a[], int x, int y,int z){
	int i, res2 = 1;
	for(i = x ; i <= y ; i++){
		res2 *= a[i];
		res2 = res2 % z;
	}
	return res2; 
}
int Hello(int a[], int x, int y){
	int i, res3;
	for(i = x + 1, res3=a[x] ; i <= y ; i++){
		res3 = res3 ^ a[i];
	}
    return res3; 
}
int max(int a,int b)
{
	int max;
	if(a>b) max=a;
	else max=b;
	return max;
}
int min(int a,int b)
{
	int min;
	if(a<b) min=a;
	else min=b;
	return min;
}