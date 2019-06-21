#include <stdio.h>
int N(int,int);
int A[10001],n;
int M(int,int);
int H(int,int);
int main()
{int re[101],i,j,k,a,b,a1,a2,b1,b2;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
    scanf("%d",&A[i]);
for(i=0;i<k;i++){
    scanf("%d %d",&a,&b);
    a1=M(a,b);
    a2=N(a,b);
    b1=a1>a2?a1:a2;
    b2=a1>a2?a2:a1;
    re[i]=H(b2,b1);
}
for(i=0;i<k-1;i++){
    printf("%d\n",re[i]);
}
printf("%d",re[i]);

return 0;
}
//N运算
int N(int a,int b){
int sum=0;
for(;a<=b;a++)
    sum+=A[a];
return sum%n;
}

//M运算
int M(int a,int b)
{
  int sum=1;
for(;a<=b;a++){

    sum*=(A[a]%n);
    if(sum>n)
        sum=sum%n;
}
return sum%n;
}
//H运算
int H(int a,int b)
{
    int sum=A[a];
    a++;
for(;a<=b;a++)
    sum=sum^A[a];
return sum;
}