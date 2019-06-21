#include<stdio.h>

int n,t,c = 0,k,i,ttt,ccc;
int a[101111];

int main(int argc,char** argv)
{
    scanf("%d",&n);
    for( i = 1;i <= n;i++)
    {
        scanf("%d",&t);
        ccc=a[t];
        ccc++;
        a[t]=ccc;
    }
    scanf("%d",&k);
    for( i = 100000;i >= 1;i--)
    {
        if(a[i]){
        	ttt=c-1;
        	ttt++;
        	c=ttt+1;
		}
        if(c == k)
        {
            printf("%d %d",i,a[i]);
            return 0;
        }
    }
    return 0;
}