#include<stdio.h>
int zs(int);
int main(){
int n,i,m;
scanf("%d",&n);
for(i=n+1;;i++)
    {if(i==zs(i)||i==2)
    {printf("%d",i);
     break;}}
return 0;}

int zs(int p){
    int j,flag=0;
    for(j=2;j<p;j++){
        if(p%j==0){
            flag++;
            }}
    if(flag==0)
        return p;
    else
        return 0;}