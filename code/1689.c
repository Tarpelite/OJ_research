#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
int i,n,t,d;
scanf("%d",&n);
for(i=n+1;i<1000000;i++){
        t=i-1;
    while(i%t!=0) t--;
    if (t==1) break;

}
printf("%d",i);
return 0;
}