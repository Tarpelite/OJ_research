#include <stdio.h>
int main()
{
    int n=0,i=1,t=0,count=0,k=0;
	int a[100000]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        a[t]++;
    }
    scanf("%d",&k);
    for(i=100000;count<k;i--){
        if(a[i]!=0)
            count++;
	}
    printf("%d %d",i,a[i]);
    return 0;
}