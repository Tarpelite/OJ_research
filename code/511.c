#include <stdio.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    for(m=m+1;m<=100003;m++){

        for(i=2;i<m;i++){

        if(m%i==0)
            break;
        }
    if(i>=m){
        printf("%d",m);
        break;}
    else
        continue;
    }
    return 0;
}