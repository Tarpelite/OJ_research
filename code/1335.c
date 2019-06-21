#include <stdio.h>
#include <stdlib.h>
double max(double x,double y){
       return x>y?x:y;
}
double min(double x,double y){
       return x<y?x:y;
}
int main()
{
    int k,a[10001],l[101],r[101],n,i=0,j=0,t=0;
    int  M[101],N[101]={0};
	int H[101]={0};
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d%d",&l[i],&r[i]);
    }
    for(i=0;i<k;i++)
	{
		M[i]=1;
        for(j=l[i];j<=r[i];j++)
		{
        N[i]=N[i]+a[j];
        M[i]=(M[i]*a[j])%n;
    }
    }
    for(i=0;i<k;i++)
	{
    for(t=min((N[i]%n),M[i]);t<=max((N[i]%n),M[i]);t++)
	{
        H[i]=H[i]^a[t];
    }
    }
    for(i=0;i<k;i++)
	{

        printf("%d\n",H[i]);
    }
    return 0;
}