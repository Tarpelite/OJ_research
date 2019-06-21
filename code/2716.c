#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,i,j;
    for(i=0;;i++){
        int c=0;
        b=a+1+i;
        for(j=2;j<b;j++){
            if(b%j==0)
            {c=1;
            break;
        }
        }
        if(c!=1)
            break;
    }
    printf("%d",b);
    return 0;

}