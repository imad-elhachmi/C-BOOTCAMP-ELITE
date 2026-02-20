#include <stdio.h>
int main(void){
//-----------------------switch statement :
    /*
        switch(name of variable)
        {
            case 1;
                //peace of code
            break;
            case 2;
                //peace of code
            break;
                .
                .
                .
            default:
                //peace of code
        }
    */
    int j = 3;
    switch(j)
    {
        case 1:
        printf("1");
        break;
        case 2 :
        case 3 :
        printf("2");
        break;
        default:
        printf("unavailable");
    }
    return (0);
}




