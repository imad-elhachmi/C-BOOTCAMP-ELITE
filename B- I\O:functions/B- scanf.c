#include <stdio.h>

int main()
{
    //scanf() : this is inputs function --> syntax : scanf("format string",arg1,arg2,...);
    
    int a ;
    puts("write a int number :");
    scanf("%d",&a); // dont  use & with string
    printf("a = %d\n",a); 
    
    char name[20] ; // 19 char and 1 character \0 of end the  string
    puts("write your name :");
    scanf("%s",name);
    printf("your name is : %s\n",name); 
   
    // Scanf does not support spaces in text -> solution : %[^\n]
    char name2[20] ; 
    puts("write your name :");
    scanf("%[^\n]",name2);
    printf("your name is : %s\n",name2);
 
    
    return 0; 
}