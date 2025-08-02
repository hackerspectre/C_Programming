// Arrays ✅ 
/*
#include<stdio.h>

int main() {
    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 92;

    // int marks[] = {97, 98, 92};
    // int marks[3] = {97, 98, 92};

    int marks[3];

    printf("Enter your 1st marks: ");
    scanf("%d", &marks[0]);

    printf("Enter your 2nd marks: ");
    scanf("%d", &marks[1]);

    printf("Enter your 3rd marks: ");
    scanf("%d", &marks[2]);

    printf("1st marks is: %d \n", marks[0]);
    printf("2nd marks is: %d \n", marks[1]);
    printf("3rd marks is: %d \n", marks[2]);

    return 0;
}
*/

// Question : 1 ✅ 
// Write a program to enter price of 3 items & print their final cost with gst.
/*
#include<stdio.h>

int main() {
    float price[3];

    printf("Enter 1st item price: ");
    scanf("%f", &price[0]);

    printf("Enter 2nd item price: ");
    scanf("%f", &price[1]);

    printf("Enter 3rd item price: ");
    scanf("%f", &price[2]);

    printf("1st item price with GST: %f \n", price[0] + (0.18 * price[0]));
    printf("2nd item price with GST: %f \n", price[1] + (0.18 * price[1]));
    printf("3rd item price with GST: %f \n", price[2] + (0.18 * price[2]));

    return 0;
}
*/

// Pointer Arithmetic ✅ 
// CASE : 1 
/*
#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;

    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);

    return 0;
}
*/

// CASE : 2 ✅
/*
#include<stdio.h>

int main() {
    float price = 20.00;
    float *ptr = &price;

    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);

    return 0;
}
*/

// CASE : 3 ✅
/*
#include<stdio.h>

int main() {
    char star = '*';
    char *ptr = &star;

    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);

    return 0;
}
*/

// CASE : 4 ✅ 
/*
#include<stdio.h>

int main() {
    int age1 = 22;
    int *ptr1 = &age1;

    int age2 = 23;
    int *ptr2 = &age2;

    printf("ptr1 = %u \n", ptr1 - ptr2);
    ptr2 = &age1;
    printf("ptr2 = %u \n", ptr1 == ptr2);

    return 0;
}
*/

// Array is a Pointer ✅ 
/*
#include<stdio.h>

int main() {
    int aadhar[5];
    int *ptr = &aadhar[0];

    //input
    for(int i = 0; i < 5; i++) {
        printf("Enter the %d number : ", i);
        scanf("%d", (ptr+i));
        // OR
        // scanf("%d", &aadhar[i]);
    }

    //output
    for(int i = 0; i < 5; i++) {
        printf("The %d number is : %d \n", i, *(ptr+i));
        // printf("The %d number is : %d \n", i, aadhar[i]);
    }

    return 0;
}
*/

// Arrays as Function Argument ✅ 
/*
#include<stdio.h>

void printNumbers(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
*/

// Multidimensional Arrays ✅ 
/*
#include<stdio.h>

int main() {
    int marks[2][3];

    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 94;

    marks[1][0] = 92;
    marks[1][1] = 85;
    marks[1][2] = 96;

    printf("%d \n", marks[0][0]);

    return 0;
}
*/

// Question : 1 ✅ 
// Write a function to count the number of odd numbers in an array.
/*
#include<stdio.h>

void countOdd(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    countOdd(arr, 10);

    return 0;
}

void countOdd(int arr[], int n) {
    int count = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }

    printf("The number of odd numbers in the array is: %d", count);
}
*/

// Question : 2 ✅
// int arr[] = {1, 2, 3, 4, 5};
// For the given array, what will the following give? 
// a. *(arr+2)
// b. *(arr+5)
/*
#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    printf("%d \n", *(arr+2));
    printf("%d \n", *(arr+5));

    return 0;
}
*/

// Question : 3 ✅ 
// Write a funciton to reverse an array. 
/*
#include<stdio.h>

void revArr(int arr[], int n);
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    revArr(arr, 5);

    return 0;
}

void revArr(int arr[], int n) {
    int temp;

    for(int i=0; i<n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}
*/

// Question : 4 ✅ 
// Write a program to store the first n fibonacci numbers.
/*
#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of fibonacci numbers you want to store : ");
    scanf("%d", &n);                   

    int arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

// Question : 5 ✅ 
// Create a 2D array, storing the tables of 2 & 3.
/*
#include<stdio.h>

int main() {
    int arr[2][10];

    for(int i=0; i<10; i++) {
        arr[0][i] = 2*(i+1);
        arr[1][i] = 3*(i+1);
    }

    for(int i=0; i<2; i++) {
        for(int j=0; j<10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

