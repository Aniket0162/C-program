                        // Practice Questions 


#include<stdio.h>

int main(){

// Q.1 Write a program to calculate area of a square.(Side is given)
// ======> 
    int sides;
    float side;

    // For intger 
    printf("Enter area of a square is = ");
    scanf("%d",&sides);

    printf("Area of a square is = %d \n",sides * sides);



    // For Float 
    printf("Enter area of a square for float is = ");
    scanf("%f",&side);

    printf("Area of a square is = %f \n",side * side);








// Q.2 Write a program to calculate area of a Circle .(radius is given)
// ====> 


float radius;

printf("Enter the radius of a circle = ");
scanf("%f",&radius);

printf("Area of circle is = %f \n", 3.14*radius*radius);










// Q.3  Write a program to calculate perimeter of a rectangle. Take sides,a & b, from the user.
// =======>

// formula is =>  P = ( L + W ) * 2

int a, b;

printf("Enter the length of a is = ");
scanf("%d",&a);


printf("Enter the Width of b is = ");
scanf("%d",&b);

int perimeter = (a + b) * 2;

printf("perimeter of rectangle is = %d \n",perimeter);







// Q.4 Take a number (n) from user & output its cube(n*n*n).
// ==========>
int number;

printf("Take any number = ");
scanf("%d",&number);

printf("Cube the Entered number  is = %d", number*number*number);







// Q.5 Write a Comments for programs a & b.  
// =========>
// Their are two types of comments :
/*
    1. Single line.
    2. Multiple line comments.

*/
    return 0;
}