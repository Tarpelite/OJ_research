#include<stdio.h>
int n;

int N(int *ar,int,int);
int M(int *ar,int,int);
int H(int *ar,int,int);
int min(int,int);
int max(int,int);

int main()
{
    int K,i=0;
    scanf("%d%d",&n,&K);
    int a[10005],l[K],r[K];

    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }

    i=0;
    while(i<K){
        scanf("%d%d",&l[i],&r[i]);
        i++;
    }

    i=0;
    while(i<K){
        printf("%d\n",H(a,min(N(a,l[i],r[i]),M(a,l[i],r[i])),max(N(a,l[i],r[i]),M(a,l[i],r[i]))));
        i++;
    }

    return 0;
}



int min(int x,int y)
{
    if(x<y){
        return x;
    }
    else if(x>=y){
        return y;
    }
}

int max(int x,int y)
{
    if(x>y){
        return x;
    }
    else if(x<=y){
        return y;
    }
}

int N(int *ar,int x,int y)
{
    int s=0;
    for(int t=x;t<=y;t++){
        s+=ar[t];
    }
    return s%n;
}

int M(int *ar,int x,int y)
{
    int s=1;
    for(int t=x;t<=y;t++){
        s=((s%n)*(ar[t]%n))%n;
    }
    return s;
}

int H(int *ar,int x,int y)
{
    int s=ar[x];
    for(int t=x+1;t<=y;t++){
        s=s^ar[t];
    }
    return s;
}