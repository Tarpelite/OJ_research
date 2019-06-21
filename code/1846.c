//B
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i = 1;i < 10000; i++){
        n++;
        a = 0;
        for(int j = 1;j <= n;j ++){
            if(n%j==0)
                a++;
        }
        if(a==2){
            break;
        }
    }
    printf("%d\n",n);
    return 0;
}