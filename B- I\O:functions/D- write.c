
#include <unistd.h> // write()

int main()
{
    // the function write() : prints just characters and strings
    // this function dont take a new line
    //syntax :write(1 , &string , number of bytes);
    //write(1 , &char , 1);
    char a = 'H';
    char str[] = "hello, world";
    char c = '0' + 2 ; //ASCII : '0' = 48
    char c2 = 50 ; //ASCII : '2' = 50
    write(1 , &a , 1);
    write(1 , "\n" , 1);
    write(1 , &str , 12);
    write(1 , "\n" , 1);
    write(1 , &c , 1);
    write(1 , "\n" , 1);
    write(1 , &c2 , 1);

    return 0;
}