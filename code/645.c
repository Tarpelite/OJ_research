#include<stdio.h>
int N(int biaomo,int biaol,int biaor,int biaoa[]);
int M(int biaomo,int biaol,int biaor,int biaoa[]);
int H(int biaol,int biaor,int biaoa[]);
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i=0,j=0;
    int a[1000]={0},b[1000]={0},c[1000]={0},d[1000]={0},e[1000]={0};
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }
    while(j<k){
        scanf("%d %d",&b[j],&c[j]);
        j++;
    }
    for(j=0;j<k;j++){
       d[j]=N(n,b[j],c[j],a);
       e[j]=M(n,b[j],c[j],a);
       if(d[j]<=e[j]){
          printf("%d\n",H(d[j],e[j],a));
        }
        else{
            printf("%d\n",H(e[j],d[j],a));
        }
    }
    return 0;
}
int N(int biaomo,int biaol,int biaor,int*biaoa){
    int sum=0,s;
    for(s=biaol;s<=biaor;s++){
        sum+=biaoa[s];
    }
    return sum%biaomo;
}
int M(int biaomo,int biaol,int biaor,int*biaoa){
    int s,p=1;
    for(s=biaol;s<=biaor;s++){
        if(biaoa[s]%biaomo==0) {
            p=0;
            break;
        }
        else{
            p=(p*biaoa[s])%biaomo;
        }
    }
    return p%biaomo;
}
int H(int biaol,int biaor,int*biaoa){
    int s,x=0;
    for(s=biaol;s<=biaor;s++){
        x=(x)^(biaoa[s]);
    }
    return x;
}