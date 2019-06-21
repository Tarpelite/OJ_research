#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(c=a+1;;c++){
   for(b=2;;b++){
    if(c%b==0)break;
   }
   if(b==c)break;
    }
    printf("%d",c);
    return 0;
}