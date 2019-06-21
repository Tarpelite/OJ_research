#include <stdio.h>
 int main() {
     int n,m,i;
      scanf("%d",&n);
       for(m=n+1;;m++){
            for(i=2;i<=m/2+1;i++){
                if(m%i==0) break;
       if(i==m/2+1){ printf("%d",m);
        return 0; } } }
        return 0; }