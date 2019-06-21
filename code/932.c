#include<stdio.h>
int zs(int);
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=a+1;;i++)
    if(i==2||i==zs(i)){




        printf("%d",i);break;}
    return 0;
}
int zs(int x){
    int j,flag=0;
    for(j=2;j<x;j++)
        if(x%j==0)
            flag++;


    if(flag==0)
        return x;
    else
        return 0;}