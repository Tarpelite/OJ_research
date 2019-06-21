#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int comb(int n,int m);
int main()
{
	int m,n,k;
	scanf("%d %d",&m,&n);
	k=comb(m,n);
	printf("%d",k);
	return 0;
}

int comb(int n, int m)
{
    if (m==1)return n;
    if (n==m||m==0)return 1;
    return comb(n-1, m-1)+comb(n-1, m);
}