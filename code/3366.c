#include<stdio.h>
int abc(int a)
{
    if(a==2){
        return 1;
    }
    else{
        int i=a-1;
        double b;
        while(i>1){
            b=a%i;
            if(b==0){
                    return 0;
                break;
            }
            i--;
        }
        if(i==1){
            return 1;
        }
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	int ans,a,i;
	double b;
	for(ans=n+1;ans<=100003;ans++)
	{
        if(abc(ans)==1) break;
	}
	printf("%d",ans);
	return 0;
}