// Functions ✅ 
/*
#include<stdio.h>

void printHello();

int main() {
    // function call
    printHello();
    printHello();
    printHello();
    return 0;
}

void printHello() {
    printf("Hello! \n");
    printf("My name is Bikram. \n");
}
*/

// Question : 1 ✅ 
// Write 2 functions - one to print "Hello" & second to print "Good Bye".
/*
#include<stdio.h>

void printHello();
void printGoodBye();

int main() {
    //function call
    printHello();
    printGoodBye();
    return 0;
}

void printHello() {
    printf("Hello! \n");
}

void printGoodBye() {
    printf("Good Bye... \n");
}
*/

// Question : 2 ✅ 
// Write a function that prints Namaste if user is Indian & Bonjour if the user is French. 
/*
#include<stdio.h>

void namaste();
void bonjour();

int main () {
    char ch;

    printf("Enter 'i' for Indian & 'f' for French: ");
    scanf("%c", &ch);

    if(ch == 'i') {
        namaste();
    } else {
        bonjour();
    }

    return 0;
}

void namaste() {
    printf("Namaste! \n");
}

void bonjour() {
    printf("Bonjour! \n");
}
*/

/*
#include<stdio.h>

int sum(int a, int b);

int main() {
    int num1;
    int num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter  num2: ");
    scanf("%d", &num2);

    // sum(num1, num2);

    int totalSum = sum(num1, num2);
    printf("Total sum is: %d", totalSum);

    return 0;
}

int sum(int a, int b) {
    // int totalSum = a + b;
    // printf("Total sum is: %d", totalSum);
    // return totalSum;

    return a + b;
}
*/

/*
#include<stdio.h>

void printTable(int n);

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printTable(num);

    return 0;
}

void printTable(int n) {
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d \n", n, i, n*i);
    }
}
*/

/*
#include<stdio.h>

void calculatePrice(float value);

int main() {
    float price;

    printf("Enter price: ");
    scanf("%f", &price);

    calculatePrice(price);

    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("Final price is : %f", value);
}
*/

// Question : 3 ✅ 
// Use library functions to calculate the square of a number given by user. 
/*
#include<stdio.h>
#include<math.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    int totalValue = pow(num, 2);
    printf("The square number is: %d", totalValue);

    return 0;
}
*/

// Question : 4 ✅ 
// Write functions to calculate area of a square, a circle & a rectangle. 
/*
#include<stdio.h>
#include<math.h>

void printSquare(float n);
void printCircle(float n);
void printRectangle(float n1, float n2);

int main() {
    float num;

    printf("Enter number: ");
    scanf("%f", &num);

    printSquare(num);
    printCircle(num);

    float num1, num2;

    printf("----: Are of the rectangle :---- \n");

    printf("Enter width: ");
    scanf("%f", &num1);

    printf("Enter height: ");
    scanf("%f", &num2);

    printRectangle(num1, num2);

    return 0;
}

void printSquare(float n) {
    n = pow(n, 2);
    printf("Square is: %f \n", n);
}

void printCircle(float n) {
    n = 3.14 * pow(n, 2);
    printf("Circle is: %f \n", n);
}

void printRectangle(float n1, float n2) {
    printf("Rectangle is: %f", n1*n2);
}
*/

// Recursion ✅ 

// Question : 5 ✅ 
// Print "Hello World" 5 times using recursion.
/*
#include<stdio.h>

void printHelloWorld(int count);

int main() {
    int count = 5;

    printHelloWorld(count);

    return 0;
}

//recursion
void printHelloWorld(int count) {
    if(count == 0) {
        return;
    }

    printf("Hello World! \n");
    printHelloWorld(count - 1);
}
*/

// Question : 6 ✅ 
// Sum of first n natural numbers using recursion. 
/*
#include<stdio.h>

int sum(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is: %d", n, sum(n));

    return 0;
}

//recursion 
int sum(int n) {
    if(n == 0) {
        return 0;
    }

    return n + sum(n - 1);
}
*/

// Question : 7 ✅ 
// Factorial of n number using recursion.
/*
#include<stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d", n, factorial(n));

    return 0;
}

//recursion 
int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}
*/

// Question : 8 ✅ 
// Fibonacci series using recursion.
/*
#include<stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series of %d is: ", n);
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

//recursion 
int fibonacci(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
*/

// Question : 9 ✅ 
// Write a function to convert celsius to fahrenheit. 
/*
#include<stdio.h>

float convertTemp(float ccelsius);

int main() {
    float far = convertTemp(37);
    printf("far : %f", far);
    return 0;
}

float convertTemp(float ccelsius) {
    float far = ccelsius * (9.0/5.0) + 32;
    return far;
}
*/

// Question : 10 ✅ 
// Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.
/*
#include<stdio.h>

float calculatePer(float sub1, float sub2, float sub3);

int main() {
    float science;
    float math;
    float sanskrit;

    printf("Enter science marks: ");
    scanf("%f", &science);

    printf("Enter math marks: ");
    scanf("%f", &math);

    printf("Enter sanskrit marks: ");
    scanf("%f", &sanskrit);

    float totalMarks = calculatePer(science, math, sanskrit);
    printf("Total percentage is: %f", totalMarks);

    return 0;
}

float calculatePer(float sub1, float sub2, float sub3) {
    float totalPer = (sub1 + sub2 + sub3) / 3;
    return totalPer;
}
*/

// Questions : 11 ✅ 
// Write a function to print n terms of the fibonacci sequence.
/*
#include<stdio.h>

int fib(int n);

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=0; i<=num; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}

int fib(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    }

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
*/


