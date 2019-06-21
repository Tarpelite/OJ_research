#include<stdio.h>
int A[110];
int N_(int l,int r,int n,int A[110])
{
    int i,ans;
    for(i=l+1,ans=A[l];i<r+1;i++){
        ans+=A[i];
        ans%=n;
    }
    return ans%n;
}
int M_(int l,int r,int n,int A[110])
{
    int i,ans;
    for(i=l+1,ans=A[l];i<r+1;i++){
        ans*=A[i]%n;
        ans%=n;
    }
    return ans%n;
}
int H_(int l,int r,int n,int A[110])
{
    int i,ans;
    for(i=l+1,ans=A[l];i<r+1;i++){
        ans^=A[i];
    }
    return ans;
}
void main()
{
    int n,K,l,r;
    int i,Hl,Hr;
    scanf("%d %d",&n,&K);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<K;i++){
        scanf("%d %d",&l,&r);
        Hl=(N_(l,r,n,A)<M_(l,r,n,A))?N_(l,r,n,A):M_(l,r,n,A);
        Hr=(N_(l,r,n,A)>M_(l,r,n,A))?N_(l,r,n,A):M_(l,r,n,A);
        printf("%d\n",H_(Hl,Hr,n,A));
    }
}