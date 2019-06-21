#include<stdio.h>
int main()
{
    long long num;
    scanf("%lld",&num);
    long long i,k;
    for(i=num+1;i<=200000;i++){
        k=2;
        while(i%k!=0)  k+=1;
        if(k==i) {
            printf("%lld\n",k);
            return 0;
            }
    }
}