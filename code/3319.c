#include <stdio.h>
int isprime(int x){
int i;
for(i=2;i*i<=x;i++){
if(x%i==0){
return 0;}}
return 1;
}
int main(){

    int n;
    scanf("%d",&n);
    int k;
    for(k=n+1;isprime(k)==0;k++){}
    printf("%d",k);
    return 0;
}