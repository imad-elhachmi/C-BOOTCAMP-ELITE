#include <stdio.h>
int main(void){
    int x , y , z , res;
    x = 5;
    y = 15;
    z = 10;
    //-----------------------addition : +
    res = x + y + z;
    printf("%d",res); // 30
    //-----------------------subtraction : -
    res = x + y - z;
    printf("%d",res); // 10
    //-----------------------multiplication : *
    res = x * y * z;
    printf("%d",res); // 750
    //-----------------------division : /
    res = ((x + y * z)/z);
    printf("%.d",res); // 15
    res = 654 / 10;
    printf("%.d",res); //65
    //-----------------------modulo : %
    res = y % x;
    printf("%d",res); // 0
    res = x % 2;
    printf("%d",res); // 1
    res = 345 % 10;
    printf("%d",res); // 5
    //-----------------------increment operator ++;
    printf("%d",x++); // 5 x++ increments the variable but return the value before the increment
    printf("%d",x++); // 6
    x = 1;
    printf("%d",++x); // 2 ++x increments the variable but return the value after the increment
    //-----------------------decrement operator --;
    x = 200;
    printf("%d",x--); // 200
    printf("%d",--x); // 198
    return (0);
}
