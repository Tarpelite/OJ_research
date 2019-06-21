#include<stdio.h>
int f(int x)
{int i=2;
int d;
while(i<x){
d=x%i;
if(d==0){
return 0;
break;}
i++;}
if(i==x)
return 1;}

int main(){
int x;
int j;
scanf("%d",&x);
j=x+1;
while(f(j)==0){
j++;}
printf("%d",j);
return 0;}