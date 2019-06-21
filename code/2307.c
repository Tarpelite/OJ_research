#include<stdio.h>

int main()
{
    long int m,n,mj=1,nj=1,mn=1,i=1,y;

    scanf("%ld%ld",&m,&n);
    if(n==0||m==0){
        printf("0\n");
        return 0;
    }
    else if(m<=n){
        printf("1\n");
        return 0;
    }
    else while(i<=m){
        mj*=i;
        i++;
    }
    i=1;
    while(i<=n){
        nj*=i;
        i++;
    }
    i=1;
    while(i<=(m-n)){
        mn*=i;
        i++;
    }

    y = mj/nj/mn;

    printf("%ld\n",y);

    return 0;

}