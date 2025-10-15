#include <stdio.h>

int main()
{
    
    //-------------------------variables :
    int a = 5 ;
    int b = 10 ;
    int tmp ;
    tmp = a ;
    a = b ;
    b = tmp ;
    printf("a = %d ,b = %d\n", a, b);
    // output : a = 10 ,b = 5
    int x , y ;
    x = 200 ;
    y = 100 ;
    x = x + y ;
    y = x - y ;
    x = x - y ;
    printf("x = %d ,y = %d\n", x, y);
    // output : x = 100 ,y = 200
    
    //---------------------------constants :
    const int s = 33 ; 
     a = 55 ;
     printf("s = %d\n", s);
     //output : s = 33
    return 0;
}