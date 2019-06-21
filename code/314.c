#include <stdio.h>
#include <math.h>

int b[10001],a[103];
int max (int a, int b){
    if (a>b){ return a;}
    else { return b;}
}

int min (int a, int b){
    if(a<b){ return a;}
    else { return b;}
}

int H(int m,int n){
    int a=b[m];
    for (m; m+1 <=n; ++m) {
        a=a^b[m+1];
    }


    return a;}
int N(int  m,int n,int k){int a=0;
    for (m; m <=n ;m++){
        a+=b[m]%k;
        a%=k;

    }
    return a;}

int M(int m, int n,int k){
    int a=1;
    for (m; m <=n ;m++) {
        a*=b[m]%k;
        a%=k;
    }
    return a;
}
int main()
{

    int m,n;
    int a_1,a_2;
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; ++i) {
        scanf("%d",&b[i]);
    }
    for (int j = 0; j <n ; ++j) {

        { scanf("%d%d",&a_1,&a_2) ;a[j]=H(min(N(a_1,a_2,m),M(a_1,a_2,m)),max(N(a_1,a_2,m),M(a_1,a_2,m)));
        }}
    for (int k = 0; k <n ; ++k) {printf("%d\n",a[k]);

    }
    return 0;
}