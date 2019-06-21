#include <stdio.h>
#include <math.h>


int main()
{
    int n,j,a=0,r;
    scanf("%d",&n);
    n=n+1;
    while(a==0){
            j=2;
            do{
                r=n%j;
                j++;
            }while(j<=sqrt(n) && r!=0);
            if(r==0)
                n=n+1;
                else if(r!=0)
                    a=a+1;
    }
    printf("%d\n",n);
    return 0;
}