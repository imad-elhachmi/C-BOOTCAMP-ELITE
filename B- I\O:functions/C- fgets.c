#include <stdio.h>

int main()
{
    // the function fgets() : inputs just the strings
    char str[201];
    puts("write a string of 200 char:");
    fgets(str,sizeof(str),stdin);
    printf("your string is :\n%s\n",str);
    
    char name[20];
    puts("write your name :");
    fgets(name,20,stdin);
    printf("your name is :\n%s\n",name);
    
    return 0; 
}