#include<stdio.h>
int main()
{
    int n,xiayige;
    int panduanzhishu(int);
    scanf("%d",&n);
    n++;
    while(panduanzhishu(n)!=1){
        n++;
    }
    printf("%d",n);
    return 0;
}

int panduanzhishu(int a)
{
    int i=2,jishu,o=0;
    if(a==2)
        return 1;
    while(i<a){
        jishu=a%i;
        if(jishu==0){o++;}
        i++;
    }
    if(o==0)
        return 1;
    if(o!=0)
        return 0;
}