#include <stdio.h>
int main(void){
    //-----------------------logical operators
    // and : &&
        /*
            1 , 1 , 1 , .... , 1 : 1
            1 , 1 , 1 , .... , 0 : 0
            0 , 0 , 0 , .... , 0 : 0
        */
       printf("%d",(2==2)&&('c'=='c')&&('k'!='S')); // 1
       printf("%d",(2==2)&&('c'=='c')&&('k'=='S')); // 0
       ((1==1)&&(0==0))?printf("True"):printf("False");
    // or : ||
        /*
            1 , 1 , 0 , 1 ...., 1 = 1
            0 , 0 , 0 , 0 ...., 1 = 1
            0 , 0 , 0 , 0 ...., 0 = 0
        */
       printf("%d",(2==2)||('c'=='c')||('k'!='S')); // 1
       printf("%d",(2!=2)||('c'!='c')||('k'!='S')); // 1

    // !(logical not) inverts the boolean value : !
        /*
             0 ---> 1
             1 ---> 0
        */
       printf("%d",!(5==5)); // 0
       printf("%d",!('c'!='c')); // 1
    return (0);
}




