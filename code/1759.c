#include<stdio.h>

int N(int a,int b,int s[]);
int M(int a,int b,int n,int s[]);
int H(int a,int b,int s[]);
int max(int a,int b);
int min(int a,int b);

int main()
{
	int n,k,i,j,l,r,p,q,answer;
	int a[100];
	
	scanf ("%d%d",&n,&k); //n个数字；k个问题 
	
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);}
		
	for (i=0;i<k;i++) {
		scanf ("%d%d",&l,&r);
		p=N(l,r,a)%n;
		q=M(l,r,n,a)%n;
		answer=H(min(p,q),max(p,q),a);
		printf ("%d\n",answer);
	}
	return 0;
}

int N(int a,int b,int s[]){
	int x=0;
	for (int i=a;i<=b;i++)
	x=x+s[i];
	return x;
}

int M(int a,int b,int n,int s[]){
	int x=1;
	for (int i=a;i<=b;i++)
	x=x*s[i]%n;
	return x;
}

int H(int a,int b,int s[]){
	int x=s[a];
	for (int i=a+1;i<=b;i++)
	x=x^s[i];
	return x;
}

int max(int a,int b){
	if (a>=b) return a;
	else return b;
}

int min(int a,int b){
	if (a<=b) return a;
	else return b;
}