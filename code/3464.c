#include<stdio.h>
int isprime(int x)
{
    int j;
    for(j=2; j*j<=x; j++)
        if(x%j == 0) 
		return 0;
    return 1;
}
int main()
{
int isprime(int x);
int i,n;
scanf("%d",&n);
for(i=n+1;;i++){
if(isprime(i))
break;
else
continue;
}
printf("%d",i);
return 0;
}