#include<stdio.h>

#include<string.h>

#include<stdlib.h>

int cmp(const void*a,const void *b)
{

return(*(int *)a-*(int *)b);

}

int a[10000000];

int main()
{

    int n,i,k,h=0,j,e=0,v=0,q;

    scanf("%d",&n);

    for(i=0;i<n;i++){

      scanf("%d",&a[i]);

    }

   qsort(a,n,sizeof(a[0]),cmp);

scanf("%d",&k);

j=a[n-1];

for(i=n-1;i>=0;i--){

    if(j==a[i]){

        v++;


    }

    else
{

        h++;

        q=j;

        j=a[i];

        e=v;

        v=1;

    }

    if(h==k){

    break;

       }

}

printf("%d %d",q,e);

}