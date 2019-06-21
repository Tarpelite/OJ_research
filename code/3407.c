#include<stdio.h>

int zhi(int x)
{
    int i, j=2;
    for(i = 2 ; i < x ; i++){
        j++;
        if(x % i == 0){
            break;
        }

    }
    if(i == j){return 0;}
    else{return 1;}
}


int main()
{
    int n, m, q;
    scanf("%d", &n);
    m = n;
    while(m >= 0){
        m++;
        q = zhi(m);
        if(q == 0)
        break;
    }
    printf("%d", m);
    return 0;
}