#include <stdio.h>

int main() {
    int k,n;
    scanf("%d%d",&n,&k);
    int i,j;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<k;j++)
    {
        int l,r,o;
        int N=0;
        scanf("%d%d",&l,&r);
        for(o=l;o<=r;o++)
            N=N+a[o];
        N=N%n;
        
        int M=1;
        for(o=l;o<=r;o++)
        {
            M=M*a[o];
            M=M%n;
        }
    
        int min,max;
        if(N>M)
        {
            min=M;
            max=N;
        }
        else {
            min=N;
            max=M;
        }
        int H=a[min];
        for(o=min+1;o<=max;o++)
            H=H^a[o];
        if(j==k-1)
            printf("%d",H);
        else
            printf("%d\n",H);
    }
    return 0;
}