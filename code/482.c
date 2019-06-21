#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main (int argc ,const char* argv[])
{

   bool is_prime;

   int n,next_number,i,last;
   
   scanf("%d",&n); 

   if(1==n){ //如果前数为1，则后数为2

        next_number=2;
   
   }

   else{

       if( 2 == n){ //如果前数为2，则后数为3
  
           next_number=3;
 
           }
       else{

            next_number =n; //质数只存在于奇数中

            if(next_number%2== 0 )

            next_number--;   //假如前数为偶数，减一变奇数
 
            do{

                is_prime=true;  //判断是否已产生下一个质数

                next_number +=2;  //保证下一个测试的数字为奇数

                last=sqrt(next_number); // 质数只等于1乘以本身，假设存在一个乘数，必定是小于数的的平方根的乘数存在

             

                for(i =3;i <= last&&is_prime;i+=2){ //如果该数不是质数，则跳出循环，到while

                    if(next_number%i == 0 ) // 如果存在大于1的乘数，，小于平方根的乘数，证明该数不是质数。

                    is_prime=false;

                }

            } while(!is_prime);  //如果不是质数，则is_prime为0，则while为1，继续回到循环中。

        }

    printf("%d\n",next_number);

    }
    return 0;
}