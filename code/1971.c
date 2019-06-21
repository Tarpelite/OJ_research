#include <stdio.h>
int main ()
{
    int n, k;
    scanf("%d%d",&n,&k);

    int a[100000];
    int i;
    int l, r;
    int N[1000], M[1000], H, min, max;
    for(i=0;i<k;i++){
        N[i]=0;
        M[i]=1;
        H=0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0;
    for(;j<k;j++){
        scanf("%d%d",&l,&r);
        for(i=l;i<=r;i++){
            N[j]=N[j]+a[i]%n;
        }
         for(i=l;i<=r;i++){
            M[j]=(M[j]*a[i])%n;
        }
        N[j]=N[j]%n;
        M[j]=M[j]%n;
        if(N[j]>M[j]){
            min=M[j];
            max=N[j];
        }
        else{
            min=N[j];
            max=M[j];
        }
        H=a[min];
        for(i=min+1;i<=max;i++){
            H=H^a[i];
        }
          printf("%d\n",H);
    }

  return 0;
}