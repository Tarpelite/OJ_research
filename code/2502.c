#include <stdio.h>
#include <math.h>
int zhishu(int a)
{
    
    int b=0,c=1,i=2;
    for(i=2;;i++)
    {
        if(a%i==0) break;
    }
    if(i==a) return c;
    else return b;
    
    
}




int main() {
int n,i;
scanf("%d",&n);

i=n+1;
for(i>1;zhishu(i)==0;i++);


    printf("%d",i);
    return 0;
}