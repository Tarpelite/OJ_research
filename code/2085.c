#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);

    for(int i=n+1;i<=200000;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            m=i;
            break;
        }
    }
    printf("%d",m);

    return 0;
}