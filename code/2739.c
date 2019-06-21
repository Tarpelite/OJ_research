#include <stdio.h>

int main(){
    int n,k,head=0,tail,headn,tailn;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int b[k],c[k];
    for(int i=0;i<k;i++){
        b[i]=-1000;
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[k-1]){
            for(int j=0;j<k-1;j++){
                b[j]=b[j+1];
                c[j]=c[j+1];
            }
            b[k-1]=a[i];
            c[k-1]=1;
            continue;
        }else if(a[i]<b[0])continue;
        else{
            for(int j=0;;j++){
                if(a[i]<b[j]){
                    if(a[i]==b[j-1]){
                        c[j-1]++;
                        break;
                    }else{
                        for(int m=0;m<j-1;m++){
                            b[m]=b[m+1];
                            c[m]=c[m+1];
                        }
                        b[j-1]=a[i];
                        c[j-1]=1;
                        break;
                    }
                }
            }
        }
    }
    printf("%d %d",b[0],c[0]);
    return 0;
}