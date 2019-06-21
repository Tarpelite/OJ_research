#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int gd(int x);
int main()
{
	int n,m;
	scanf("%d",&n);
	for (int i=n+1; ;i++){
		if (gd(i)){
			m=i;
			break;
		}
	}
	printf("%d",m);
	return 0;
}


int gd(int x)
{
	int a=0;
	for (int i=2; i<x; i++)
	{
		if (x%i==0)
			a++;
	}
	if (x>=2&&a==0) return 1;
	else return 0;
}