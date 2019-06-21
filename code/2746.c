#include<stdio.h>
//模的性质(a * b) % p = (a % p * b % p) % p; (a % p + b % p) % p
int n,i,j,l,r,K,N = 0,M = 1,H,min,max;
int a[10005]; 

int f_N(int l, int r)
{
	if (l == r){
		return a[l] % n;
	}
	else {
		N = a[l];
		for (i = l + 1;i <= r;i++){
		    N = ((N % n) + (a[i] % n)) % n;
    	}
    	return N;
	}
}
int f_M(int l, int r)
{
	if (l == r){
		return a[l] % n;
	}
	else {
		M = a[l];
		for (i = l + 1;i <= r;i++){
		    M = ((M % n) * (a[i] % n)) % n;
    	}
    	return M;
	}
}
int f_H(int l, int r)
{
	if (l == r){
		return a[l];
	}
	else {
    	H = a[l];
	    for (i = l + 1;i <= r;i++){
		    H = H ^ a[i];
    	}
	    return H;	
	}
}

int main()
{
	scanf("%d%d",&n,&K);
	for (j = 0;j < n;j++){
		scanf("%d",&a[j]);
	}
	for (j = 0;j < K;j++){
		scanf("%d%d",&l,&r);
		min = f_N(l,r) < f_M(l,r) ? f_N(l,r) : f_M(l,r);
		max = f_N(l,r) > f_M(l,r) ? f_N(l,r) : f_M(l,r);
		printf("%d\n",f_H(min,max));
	}
	return 0;
}