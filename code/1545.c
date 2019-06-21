#include<stdio.h>
#include<math.h>
#define max(x,y) x>y?x:y
#define min(x,y) x>y?y:x

int N(int,int);
int M(int,int);
int H(int,int);

int k,n,i;
int a[11000],l,r;
int main()
{
   scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(~scanf("%d%d",&l,&r)){

         printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
    }
    return 0;
}
int N(int l,int r)
{
    int sum=0;
    for(i=l;i<=r;i++){
        sum=(sum+a[i])%n;
    }
    return sum%n;

}
int M(int l,int r)
{
    int sum=1;
    for(i=l;i<=r;i++){
        sum=(sum*(a[i]))%n;
    }
    return sum%n;
}
int H(int l,int r)
{
    int sum=0;
    for(i=l;i<=r;i++){
        sum=sum^a[i];
    }
    return sum;
}