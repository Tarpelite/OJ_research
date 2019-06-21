#include <stdio.h>
#include <stdlib.h>

int szs(int);
int main()
{int a,i;
    scanf("%d",&a);
    a++;
    while(!szs(a))
        a++;
    printf("%d",a);


    return 0;

}

int szs(int a)
{
int i,state=1;
for(i=2;i<a;i++){
    if(a%i==0)
        state=0;
}
return state;
}