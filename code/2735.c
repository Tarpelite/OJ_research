#include<stdio.h>
#include<math.h>
#include<string.h>
int n,A[107];
int min(int l,int r)
{
    return(l>r?r:l);
}
int max(int l,int r)
{
    return(l>r?l:r);
}
int N(int l,int r)
{
    int i,a=0;
    for(i=l;i<=r;i++){
        a+=A[i];
        a%=n;
    }
    return (a%n);
}
int M(int l,int r)
{
    int i,a=1;
    for(i=l;i<=r;i++){
        a*=A[i];
        a%=n;
    }
    return a;
}
int H(int l,int r)
{
    int i,a=A[l];
    for(i=l+1;i<=r;i++){
        a^=A[i];
    }
    return a;
}
int main()
{
    int i,l,r,k;
    scanf("%d%d",&n,&k);
    for (i=0;i<n;i++)scanf("%d",&A[i]);
    for(i=1;i<=k;i++){
        scanf("%d%d",&l,&r);
        int x=N(l,r);
        int y=M(l,r);
        printf("%d\n",H(min(x,y),max(x,y)));
    }
    return 0;
}