// Instructions =

// These are Statements in program 

/*

Types =   1. Type Declaration Instructions.
          2. Arithmetic Instructions.
          3. Control Instructions.

*/

// 1. Type Declaration Instructions ===> declare var before using it.

/* 

 VALID =                        INVALID = 

int a = 22;                     int a = 22; 
int b = a;                      int b = a;                    
int c = b + 1;                  int c = b + 2; 
int d = 1, e;                   int d = 2, e; 

int a,b,c;                      int a,b,c = 1;      
a = b = c = 1;

*/








#include<stdio.h>
#include<math.h>

int main() {
    // Valid Statments = 

    int a = 22;
    int b = a;
    int c = b + 1;
    int d = 1, e;

    int x,y,z;
    x = y = z = 3;

    // In-Valid Statments =

    int oldAge = 22;
    int year = 2;
    int newAge = oldAge + year;      // this line is not showing error because we have declared variable first before using it.
/*
    int newAge = oldAge + years;     // this line is showing error because we have to declare variable first before using it.
    int years = 2;

    int x = y = z = 4;    // this line will also give an error as we can't [ use ]  and  [ declare ] value of variable at same time  

*/   



// Arithmetic Instructions =>  [ + , - , * , / , %  ].

/* 

 VALID =                        INVALID = 

int a = b + c;                  int b + c = a;   
int a = b * c;                  int a = bc;   
int a = b / c;                  int a = b ^ c;   

Ex. 

    int b, c;
    b = c = 1;
    int a = b + c;

    int a = b ^ c;   // this will give an error because we don't declare power like this. for power declaration we use function called [ pow ].

    int power = pow(b,c); 
*/





//  Modular Operation (%) = Returns remainder for int

/*

Ex. 

         3 % 2 = 1
        -3 % 2 = -1

        printf("%d", 8 % 3);

*/


// Type Conversion = 

// int  Operation       int =====> int 
// int  Operation       float =====> float                // int takes 2 bytes & float takes 4 bytes.
// float  Operation       float =====> float 
    return 0;
}