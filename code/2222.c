#include<stdio.h>
long long jie(int);
long long jiejie(int,int);

int main()
{
    int n,m;
    long long c;
    scanf("%d%d",&n,&m);//n是目的地，m是能去的
    if(m==0){
        printf("0");
    }
    else{
    c=(long long)(jiejie(m+1,n))/(jie(n-m));

    printf("%lld\n",c);}



    return 0;
}

long long jie(int k)
{
    int i,s=1;
    for(i=2;i<=k;i++){
        s*=i;
    }
    return s;
}

long long jiejie(int k,int l)
{
    int i;
    long long s=1;
    for(i=k;i<=l;i++){
        s*=i;
    }
    return s;
}