#include <stdio.h>

int main()
{
    
//  ---------------------------data types AND variables
                           //   format specifier                      //byte = 8bits
   int k = 25 ; //integer  (d or i)                                   2 or 4 byte
   int a ;
   a = 76 ;
   int b , c , d ;
   b = 1 ; c = 2 ; d = 3 ;
   float e = 10.69086 ;      //(f or e or E or g or G)                4byte
   double f = 0.72625627; //((lf) or f or e or E or g or G or )       8byte
// void ;                                                             //0 byte
   char g = 'c' ; //(c)                                               1byte                                                 
   printf("%d, %d, %d, %d, %d, %.2f, %.8lf, %c\n", k, a, b, c, d, e, f, g);
   //output : 25, 76, 1, 2, 3, 10.69, 0.72625627, c
   
// -----------------------------type specifiers 
   short int z = 22 ; //or short a = 22 ; (d or i)                    2byte
   long int l = 222; //or long l = 222 ;  (ld)                        8byte
   long long int m = 2222 ; //      (lld or lli)                      8byte
   long double n = 266.876543245678 ;   // (lf or LE or lg or LG )    16byte
   printf("%d, %ld, %lld, %.12Lf\n", z, l, m, n);
   // output : 22, 222, 2222, 266.876543245678
   
// ---------------------------type modifiers
  signed int w , u ;  // (d)
   w = 33 ;
   u = -45;
   unsigned int num1 , num2 ; // (u or (x or X)->hexadecimal  or o -->octal)
   num1 = 348 ;
   num2 = -89;
   printf("%d, %d, %u, %u\n", w, u, num1, num2);
   // output : 33, -45, 348, 4294967207
   
//-----------------------------function sizeof 
    int var1 = 77 ;
    float var2 = 77 ;
    printf("size of type int is : %d\n",sizeof(var1));
    printf("size of type float is : %d\n",sizeof(var2));
    printf("size of type char is : %d\n",sizeof(char));
    // output :
    /*
    size of type int is : 4
    size of type float is : 4
    size of type char is : 1
    */
    
//-------------------------variables naming conventions    
   /*
   #- a variable name must contain UPPERCASE or lowercase letters , numbers , and the under score character _ (_ and $ is a letter )
   #- dont start with a number 
   #- VARIABLE != variable != Variabler ......
   #- dont use reserved keywords 
   #- use meaningful name
   #- it does not contain a space
   #- while != WHILE != .....
   #Pascal case : FirstNameExamlple
   #camel case : firstNimeExample
   #snake case : first_name_example
   */ 
    return 0;
}