// Structure of our program

// #include<stdio.h>

// int main(){
//     printf("Hello World\n");
//     return 0;
// }
    // Comments = Lines that are not part of program.

/*  1. Single line Comments = [ // ] 
    2. Multiple line comments =  [  /*  * / ]
*/

// Output =
#include<stdio.h>

int main(){

int age = 22;
float pi = 3.14;  
char star = '*';

int a, b;

int salary; 
printf("Hi My name is Anish \n"); // Backslash \n is use to break the line & print the data in new line
printf("Hi My name is Karan \n");
printf("Hi My name is Mayure\n");

 

// In Output we have some cases = for output we use [ printf ] 

/*
1. Intgers = 
printf("age is %d", age);

2. real numbers = 
printf("value od pi is %f", pi);

3. characters = 
printf("star looks like %c", star);

*/

printf("Anish age is %d \n", age);
printf("Anish got %f of profit \n", pi);
printf("this is how we can print star %c \n",star);


//  Input = for input we use [ scanf ]
printf("Enter your amount = ");
scanf("%d",&salary); 
printf("Your monthly salary is =  %d \n",salary);

// operators

printf("Enter value of a = "); // take a input of a 
scanf("%d",&a);

printf("Enter value of b = "); // take a input of b
scanf("%d",&b);

int sum = a + b; //Addition of two numbers.

printf("Sum of a + b is =  %d  ",sum);
            // or
// printf("Sum of a + b is =  %d  ", a + b);


// Compiler = A computer program that translate C code into machine code.

// eg.        Hello.  ------------->   C compiler  --------------> a.exe(Windows) / a.out(linux & mac)


//  1 = Means High Volatage .
//  0 = Means Low Volatage .

return 0;

   
} 

