#include <stdio.h>
#include<math.h>

int ab(int a)
{
    int i=2;
    double b;
    b=(double)sqrt(a)+1;
    while(i<=b){
        if(a%i==0) {return 0;break;}
        else i++;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    n++;
    if(n==2) printf("3");
    else{
        while(ab(n)==0) n++;
        printf("%d",n);
    }
    return 0;
}