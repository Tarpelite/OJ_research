#include <stdio.h>
int main()
{
    int search_oddnum;
    scanf("%d",&search_oddnum);
    int temp=0,k;
    search_oddnum+=1;
    for (;temp==0;search_oddnum++)
    {
        for (k=2;k<=search_oddnum;k++)
        {
            if(search_oddnum%k){}
            else
            {break;}
        }
        if(k<search_oddnum)
            temp=0;
        if(k==search_oddnum)
            temp=1;
    }
    search_oddnum--;
    printf("%d",search_oddnum);
    
    
}