#include <stdio.h>
#include <stdlib.h>
int u(int);

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i>n;i++){
        if(u(i)==1) {printf("%d",i); break;}
    }
    return 0;
}

int u(int x)
{
    int j=0;
    for(int i=2;i<x;i++){
        if(x%i==0) j++;
    }
    if(j==0) return 1;
    else return 0;

}