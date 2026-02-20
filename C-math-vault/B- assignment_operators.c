#include <stdio.h>
int main(void){
    //-----------------------Assignment operators :
    /*
        += : x+=y; -----> x = x + y;
        -= : x-=y; -----> x = x - y;
        *= : x*=y; -----> x = x * y;
        /= : x/=y; -----> x = x / y;
        %= : x%=y; -----> x = x % y;
    */
   int a ;
   //+= : x+=y; -----> x = x + y;
   a = 0;
   a += 10;
   printf("%d",a); // 10
   //-= : x-=y; -----> x = x - y;
   a = 0;
   a -= 10;
   printf("%d",a); // -10
   //*= : x*=y; -----> x = x * y;
   a = 2;
   a *= 10;
   printf("%d",a); // 20
   // /= : x/=y; -----> x = x / y;
   a = 10;
   a /= 2;
   printf("%d",a); // 5
   // %= : x%=y; -----> x = x % y;
   a = 2;
   a %=2;
   printf("%d",a);
    return (0);
}




