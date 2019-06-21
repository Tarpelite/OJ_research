#include<stdio.h>
int is_prime(int a);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;;i++){
        if(is_prime(i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
int is_prime(int a)
{
    int i;
    //if(a==2){
      //  return 1;
    //}
    //else{
        for(i=2;i<a;i++){
            if(a%i==0){
                return 0;
            }
        }
        return 1;
    //}
}