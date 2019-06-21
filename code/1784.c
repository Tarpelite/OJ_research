/*
 Author: 杨伟奇
 Result: WA	Submission_id: 1568721
 Created at: Sat Apr 06 2019 10:43:24 GMT+0800 (CST)
 Problem_id: 1936	Time: 4	Memory: 1500
*/

#include <stdio.h>
#include <stdlib.h>
int N(int l,int r,int n);
int M(int l,int r,int n);
int H(int l,int r);

int a[100],n,i;

int main()
{
    int k,i,min,max,l[100],r[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
        scanf("%d%d",&l[i],&r[i]);
    for(i=0;i<k;i++)
    {
        min=(N(l[i],r[i],n)<M(l[i],r[i],n))?N(l[i],r[i],n):M(l[i],r[i],n);
        max=(N(l[i],r[i],n)>M(l[i],r[i],n))?N(l[i],r[i],n):M(l[i],r[i],n);
        printf("%d\n",H(min,max));
    }
    return 0;
}
int N(int l,int r,int n)
{
    int Nr=0,Ns;
    for(i=l;i<=r;i++)
        Nr=Nr+a[i];
    Ns=Nr%n;
    return(Ns);
}
int M(int l,int r,int n)
{
    int Mr=1;
    for(i=l;i<=r;i++)
        Mr=Mr*a[i]%n;
    return(Mr);
}
int H(int l,int r)
{
    int Hr=0;
    for(i=l;i<=r;i++)
        Hr=Hr^a[i];
    return(Hr);
}