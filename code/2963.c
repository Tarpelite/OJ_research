#include <stdio.h>

int main()
{
    int n,m,i;
    scanf("%d",&n);
    m=n+1;
    i=n;
    while(1){
        if(m%i!=0)
            i--;
        else if(i==1){
            printf("%d",m);
            break;
        }
        
        else if(m%i==0 && i!=1){
            m++;
            i=m-1;
        }
    }
    return 0;
}