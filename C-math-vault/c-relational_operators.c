#include <stdio.h>
int main(void){
//-----------------------boolean values : 1 is True and 0 is False
//-----------------------Relational operators
    // ==
    printf("%d",23==23); // 1
    printf("%d",23==24); // 0
    // !=
    printf("%d",'a' == 'a'); // 1
    printf("%d",'a' == 'c'); // 0
    // <
    printf("%d",6 < 6); // 0
    printf("%d",'a' < 'z'); // 1
    // >
    printf("%d",6 > 6); // 0
    printf("%d",'a' > 'z'); // 0
    // <= and >=
    printf("%d",6 <= 6); // 1
    printf("%d",'a' <= 'z'); // 1
    return (0);
}




