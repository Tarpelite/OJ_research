#include <stdio.h>

#include <stdlib.h>

int pailie(int m,int n);

int main()

{int m,n;

scanf("%d%d",&m,&n);

printf("%d",pailie(m,n));



    return 0;

}

int pailie(int m,int n)

{if(n==0) return 0;

    else if(n==m) return 1;

    else if(n==1) return m;

    else return(pailie(m-1,n)+pailie(m-1,n-1));

}