#include<stdio.h>
int N(int num[],int l,int r,int n);
int M(int num[],int l,int r,int n);
int ma(int x1,int x2);
int mi(int x1,int x2);
int H(int num[],int l,int r);
int main(void){

    int n,m,i,l,r;
    int num[100]={0};
    int result[100]={0};
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
        scanf("%d ",&num[i]);

    for(i=1;i<=m;i++)
        {
            scanf("%d %d",&l,&r);
            result[i]=H(num,mi(N(num,l,r,n),M(num,l,r,n)),ma(N(num,l,r,n),M(num,l,r,n)));
        }
    for(i=1;i<=m;i++)
        printf("%d\n",result[i]);


    return 0;
}
int N(int num[],int l,int r,int n){

    int i,sum1=0;
    for(i=l;i<=r;i++)
    {
        sum1+=num[i];
    }
    sum1=sum1%n;
    return sum1;
}
int M(int num[],int l,int r,int n){

    int i,sum2=1;
    for(i=l;i<=r;i++)
    {
        sum2=num[i]*sum2%n;
    }
    sum2=sum2%n;
    return sum2;
}
int ma(int x1,int x2){
    int sum3;
    if(x1>x2)
        sum3=x1;
    else sum3=x2;

    return sum3;
}
int mi(int x1,int x2){
    int sum;
    if(x1<x2)
        sum=x1;
    else sum=x2;
    return sum;


}
int H(int num[],int l,int r){

    int i,sum=num[l];
    for(i=l+1;i<=r;i++)
    {
        sum=sum^num[i];
    }
    return sum;
}