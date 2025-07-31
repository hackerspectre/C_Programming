// Variables ✅ 
// Variable is the name of a memory location which stores some data.
/*
#include <stdio.h>
int main() {
    int a = 10;
    char b = 'c';
    float PI = 3.14;
    
    int age = 22;
    age = 23;
    printf("%d", age);
    return 0;
}
*/

// Constants ✅
// A constant variable cannot be changed after initialization, it keeps its value throughout the program execution. (Fixed)
/*
#include<stdio.h>
int main() {
    const age = 22;
    // age = 23;    //error
    printf("The value of age is %d\n", age);

    const num = 5;
    // num = 6;   //error

    const PI = 3.14;
    PI = 3.15;  //error
    return 0;
}
*/

// Program Structure 🚀
/*
#include<stdio.h>

int main() {
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");
    return 0;
}
*/

// Comments 💭
// Single Line
//This is a single line comment

// Multiple Lines
/* This
is a multiple
line comment */

// CASES 
/*
#include<stdio.h>

int main() {
    int age = 22;
    printf("Age is: %d \n", age);

    float PI = 3.14;
    printf("Value of PI is: %f \n", PI);

    char star = '*';
    printf("Star looks like this: %c", star);

    return 0;
}
*/

// Input for user ✅
/*
#include<stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf( "%d" , &age );

    printf("Age is: %d \n", age);
    return 0;
}
*/

// Compilation ✅ 
// A computer program that translates C code into machine language or object code, which can be executed by the computer.

// 1. First Program in C 
/*
#include<stdio.h>

int main() {
    printf("Hello, I'm Bikram!");
    return 0;
}
*/

// 2. Variables & Data Types + Constants & Keywords ✅
/*
#include<stdio.h>

int main() {
    int number;
    int age;
    int price;
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int age = 22;
    float PI = 3.14;
    char percentage = '%';

    //Output
    printf("The value of age is : %d\n", age);
    printf("The value of PI is : %.2f\n", PI);
    printf("The value of percentage sign is : %c\n", percentage);
    return 0;
}
*/

// 3. Comments ✅ 
/*
#include<stdio.h>
// This program print Hello World!
int main() {
    printf("Hello World!");
    return 0;
}
*/

// 5. Input (Sum of 2 numbers) ✅ 
/*
#include<stdio.h>

int main() {
    int num1;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    int num2;
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int sum = num1 + num2;
    printf("The sum of %d and %d is %d.", num1, num2, sum);

    return 0;
}
*/

// 6. Practice Qs 1 (Area of Square) ✅ 
/*
#include<stdio.h>

int main() {
    float side_length;
    printf("Enter the side length of square: ");
    scanf("%f", &side_length);

    float area = side_length * side_length;
    printf("The area of square is %.2f.", area);

    return 0;
}
*/

// 7. Practice Qs 2 (Area of Circle) ✅ 
/*
#include<stdio.h>

int main() {
    printf("Enter the radius of circle: ");
    float radius = 0;
    scanf("%f", &radius);

    float pi = 3.14159; // Approximate value of Pi

    float area = pi * radius * radius;
    printf("The area of circle is %.2f.", area);

    return 0;
}
*/

// 8. Write a C program to find out whether a number is even or odd. ✅ 
/*
#include<stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
*/

