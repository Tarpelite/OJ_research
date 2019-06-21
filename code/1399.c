#include <stdio.h>

int N(int x,int p[],int s,int f);
int M(int y,int q[],int d,int g);
int H(int m,int n,int w[]);

int main(void) {
    int n,k,i;
    int max,min;
    scanf("%d%d",&n,&k);
    int a[100];
    int b[100],c[100];
    int h[100];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d%d",&b[i],&c[i]);
    }
    for(i=0;i<k;i++){
        max=(N(n,a,b[i],c[i])>M(n,a,b[i],c[i]))?N(n,a,b[i],c[i]):M(n,a,b[i],c[i]);
        min=(N(n,a,b[i],c[i])<M(n,a,b[i],c[i]))?N(n,a,b[i],c[i]):M(n,a,b[i],c[i]);
        h[i]=H(min,max,a);
        printf("%d\n",h[i]);
    }
    
    return 0;
}

int N(int x,int p[],int s,int f){
    int sum=0,i;
    for(i=s;i<=f;i++){
        sum+=(p[i]%x);
    }
    sum%=x;
    return sum;
}

int M(int y,int q[],int d,int g){
    int sum=1,i;
    for(i=d;i<=g;i++){
        sum*=q[i];
        sum%=y;
    }
    return sum;
}

int H(int m,int n,int w[]){
    int sum=w[m],i;
    for(i=m+1;i<=n;i++){
        sum=(sum^w[i]);
    }
    return sum;
}