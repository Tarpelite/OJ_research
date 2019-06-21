#include <stdio.h>
int is_prime(int x){
if(x == 1) return 0;
for(int now = 2 ; now*now<=x;now++)
    if(x%now == 0)
    return 0;
    return 1;

}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<200000;i++){
        if(is_prime(i)==1)
            break;
    }
    printf("%d",i);

    return 0;
}