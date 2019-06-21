#include <stdio.h>

int n,A[100]={0};

int main()

{

	int K,j,l[100]={0},r[100]={0};

	int result[100]={0};

	scanf("%d %d",&n,&K);

	for(j=0;j<=n-1;j++)

	scanf("%d",&A[j]);

	for(j=0;j<=K-1;j++)

	scanf("%d %d",&l[j],&r[j]);

	for(j=0;j<=K-1;j++)

	{

	result[j]=H(min(N(l[j],r[j]),M(l[j],r[j])),max(N(l[j],r[j]),M(l[j],r[j])));

	printf("%d\n",result[j]);

	}

    return 0;

 } 
 
 
 int N(int l,int r)

{

	int j,E=0;

	for(j=l;j<=r;j++)

	E=E+A[j];

	return E%n;

}

int M(int l,int r)

{

	int j,E=1;

	for(j=l;j<=r;j++)

	{

	E=E*A[j];

	while (E>n)

	E=E-n;

	}

	return E%n;

}

int H(int l,int r)

{

	int j,E=0;

	for(j=l;j<=r;j++)

	E=E^A[j];

	return E;

}

int max(int a,int b)

{

	if(a>=b)

	return a;

	else

	return b;

}

int min(int a,int b)

{

	if(a<=b)

	return a;

	else

	return b;

}