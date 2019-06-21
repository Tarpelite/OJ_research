#include <stdio.h> 
#include <stdlib.h> 
int main()
 { double n,m,i,sum=1; scanf("%lf%lf",&m,&n);
 for(i=0;
i<n;
i++){
 sum=sum*(m-i)/(n-i); 
} 
printf("%.0lf",sum); 
return 0; 
}