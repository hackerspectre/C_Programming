// Pointers ✅ 
/*
#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    //address 
    // printf("%p \n", &age);

    // printf("%u \n", &age);
    // printf("%u \n", ptr);

    // printf("%u \n", &ptr);

    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));
    printf("%d \n ", _age);

    return 0;
}
*/

// Question : 1 ✅ 
/*
#include<stdio.h>

int main() {
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    *ptr += 5;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    (*ptr)++;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    return 0;
}
*/

// Pointer to Pointer ✅ 
/*
#include<stdio.h>

int main() {
    // int age = 22;
    // int *ptr = &age;
    // int **pptr = &ptr;

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d \n", **pptr);

    return 0;
}
*/

// Pointers in Function Call ✅ 
/*
#include<stdio.h>

void square(int n);
void _square(int *n);

int main() {
    int number = 4;

    square(number);
    printf("Number is = %d \n", number);

    _square(&number);
    printf("Number is = %d \n", number);

    return 0;
}

//call by value
void square(int n) {
    n = n * n;
    printf("Square = %d \n", n);
}

//cal by reference
void _square(int *n) {
    *n = *n * *n;
    printf("Square = %d \n", *n);
}
*/

// Question : 2 ✅ 
// Swap 2 numbers, a & b.
/*
#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3;
    int y = 5;

    swap(x, y);
    printf("x = %d & y = %d \n", x, y);

    _swap(&x, &y);
    printf("x = %d & y = %d \n", x, y);
    
    return 0;
}

//call by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
}


//call by reference
void _swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("a = %d \n", *a);
    printf("b = %d \n", *b);
}
*/

// Question : 3 ✅ 
// Will the address output be same? 
/*
#include<stdio.h>

void printAddress(int n);

int main() {
    int n = 4;
    printf("%u \n", &n);

    printAddress(n);

    return 0;
}

void printAddress(int n) {
    printf("%u \n", &n);
}
*/

//Question : 4 ✅
// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
/*
#include<stdio.h>

void doWork(int a, int b, int *sum, int *product, int *average);

int main() {
    int a = 4, b = 6;
    int sum, product, average;

    doWork(a, b, &sum, &product, &average);
    printf("Sum = %d, Product = %d, Average = %d \n", sum, product, average);

    return 0;
}

void doWork(int a, int b, int *sum, int *product, int *average) {
    *sum = a + b;
    *product  = a * b;
    *average = (a + b) / 2;
}
*/

