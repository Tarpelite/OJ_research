#include <stdio.h>
#include <math.h>
int a[10000000]={0};
int b[10000000]={0};
int f[10000000]={0};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int n;
    scanf("%d",&n);
    int s,i,d;
	int k=1,pd;
    for (d=1;d<=n;d++)
    {
    	b[d]=1;
	}
    for(d=1;d<=n;d++)
    {
    	scanf("%d",&s);
    	if(a[s]==s)
    	{
    	   b[s]++;	
		}
    	a[s]=s;
	}
	for(s=1;s<=n;s++)
	{
	    if(a[s]!=0)
		{
		   f[k]=a[s];
		   b[k]=b[s];
		   k++;	
		}
	}
	scanf("%d",&pd);
	printf("%d %d",f[k-pd],b[k-pd]);
	return 0;
}