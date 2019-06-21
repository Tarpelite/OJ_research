#include <stdio.h>

int n;

int A[100]={0};

int N(int l,int r)

{

	int i,E=0;

	for(i=l;i<=r;i++)

	E+=A[i];

	return E%n;

}

int M(int l,int r)

{

	int i,E=1;

	for(i=l;i<=r;i++)

	{

	E*=A[i];

	while (E>n)

	E-=n;

	}

	return E%n;

}

int H(int l,int r)

{

	int i,E=0;

	for(i=l;i<=r;i++)

	E=E^A[i];

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

int main()

{

	int K,i,l[100]={0},r[100]={0};

	int result[100]={0};

	scanf("%d %d",&n,&K);

	for(i=0;i<=n-1;i++)

	scanf("%d",&A[i]);

	for(i=0;i<=K-1;i++)

	scanf("%d %d",&l[i],&r[i]);

	for(i=0;i<=K-1;i++)

	{

	result[i]=H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i])));

	printf("%d\n",result[i]);

	}

    return 0;

 }