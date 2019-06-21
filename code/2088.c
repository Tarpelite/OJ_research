#include <stdio.h>

int a[10000],n;

int N(int l,int r){
    int i,sum=0;
    for(i=l;i<=r;i++)
        sum=sum+a[i];
        return sum%n;
}

int M(int l,int r){
    int i;
    long long int ji=1;
    for(i=l;i<=r;i++)
        ji=ji*a[i]%n;
    return ji;
}

int H(int l,int r){
    int i,yihuo;
    yihuo=a[l];
    for(i=l+1;i<=r;i++)
        yihuo=yihuo^a[i];
    return yihuo;
}

int main()
{
    int j,K,MIN,MAX;
    int b[200][200],c[200];
    scanf("%d%d",&n,&K);
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    for(j=0;j<K;j++){
        scanf("%d%d",&b[j][0],&b[j][1]);
        MIN=(N(b[j][0],b[j][1])<M(b[j][0],b[j][1]))?N(b[j][0],b[j][1]):M(b[j][0],b[j][1]);
        MAX=(N(b[j][0],b[j][1])>M(b[j][0],b[j][1]))?N(b[j][0],b[j][1]):M(b[j][0],b[j][1]);
        c[j]=H(MIN,MAX);
    }
    for(j=0;j<K;j++)
        printf("%d\n",c[j]);
    return 0;
}