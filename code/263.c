#include <stdio.h>
int main()
{
	int n,k,a[10000],l,r,h,H[10000],max,min;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
	
	for(int w=0;w<k;w++){
		int N=0,M=1;//重新定义 
		scanf("%d%d",&l,&r);
		for(int o=l;o<=r;o++){
			N=N+(a[o]%n);
            N=N%n;
            M=M*(a[o]%n);
            M=M%n;}
		if(N>M)
			{max=N;
			min=M;}
		else{max=M;
			min=N;}
		h=a[min];
		for(int j=min+1;j<=max;j++){
			h=h^a[j];}
		H[w]=h;
	}
	
	for(int i=0;i<k;i++)
		printf("%d\n",H[i]);
	return 0;
}
//由题  先求和，再mod
//先连乘，会爆 
//重新定义