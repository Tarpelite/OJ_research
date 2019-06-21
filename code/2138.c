#include <stdio.h>
#define LEN 105
#define Max(a,b) ((a > b) ? a : b)
#define Min(a,b) ((a < b) ? a : b)

int N(int n, int l, int r, int a[]){
	int i;
	int s1 = 0;
	
	for(i = l;i <= r;i++){
		s1 += a[i]; 
	}
	s1 = s1 % n;
	
	return s1;
}

int M(int n, int l, int r, int a[]){
	int i;
	int s2 = 1;
	
	for(i = l;i <= r;i++){
		s2 *= (a[i] % n);
		if(s2 >= n){
			s2 = s2 % n;
		}
	}
	
	return s2;
}

int H(int n, int l, int r, int a[]){
	int i;
	int s3 = a[l];
	
	for(i = l + 1;i <= r;i++){
		s3 ^= a[i];
	}
	
	return s3;
}


int main()
{
	int n,k;
	int a[LEN] = {0},l[LEN] = {0},r[LEN] = {0};
	int i;
	
	scanf("%d%d",&n,&k);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i < k;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	
	for(i = 0;i < k;i++){
		printf("%d\n",H(n, Min(N(n, l[i], r[i], a),M(n, l[i], r[i], a)), Max(N(n, l[i], r[i], a),M(n, l[i], r[i], a)), a) );
	}

    return 0;
}