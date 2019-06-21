#include<stdio.h>

int main()
{
    int a,b[100000]={0},d,i,j,k=100000,n=0;
    scanf("%d",&a);
    int c[a];
    for(i=0;i<a;i++)scanf("%d",&c[i]);
    scanf("%d",&d);
    for(j=0;j<a;j++)b[c[j]]++;
    while(n!=d)
    {
        k--;
		if(b[k]!=0)n++;
    }
   	printf("%d %d\n",k,b[k]);
	return 0;
}