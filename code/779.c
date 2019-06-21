#include<stdio.h>

int zhi(int x)
{
    int p = 2;
    for(p = 2 ; p < x ; p++){
        if(x % p == 0)
            break;
    }

    if(p == x){return 0;}
    else{return 1;}
}

int main()
{
    int x,n;
    scanf("%d", &x);

    while (1)
    {   x++;
        if (zhi(x)==0)
        {
            printf("%d", x);
            break;
        }

    }
    return 0;
}