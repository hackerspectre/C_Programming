// Dynamic Memory Allocation ✅ 

// 1. Malloc ✅
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
        // ptr[i] = i + 1;
    }

    // Printing the values
    for (int i = 0; i < 5; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

// Question : 1 ✅
// Write a program to allocate memory to store 5 price.
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("The value of %d element is: %.2f\n", i, ptr[i]);
    }

    return 0;
}
*/

// 2. Calloc ✅ 
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    // We can also change the value of array using calloc
    // ptr[0] = 11;
    // ptr[1] = 12;

    // for(int i=0; i<5; i++) {
    //     printf("Enter the value of %d element: \n", i);
    //     scanf("%d", &ptr[i]);
    // }

    for(int i=0; i<5; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

// Question : 2 ✅ 
// Write a program to allocate memory of size n, where n is entered by the user.
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;

    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

// 3. Free ✅ 
/*
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;

    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    // free() ✅
    free(ptr);
    printf("After free: \n");

    for(int i=0; i<2; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<2; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

// 4. Realloc ✅ 
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;

    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));
    for(int i=0; i<n; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    // realloc() ✅
    ptr = realloc(ptr, 5*sizeof(int));

    for(int i=0; i<5; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<5; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

// Question : 3 ✅
// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;

    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));
    for(int i=0; i<n; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    // realloc() ✅
    ptr = realloc(ptr, 8*sizeof(int));

    for(int i=0; i<8; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<8; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

// Question : 4 ✅ 
// Create an array of size 5(using  calloc) & enter its values from the user.
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;

    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

// Question : 5 ✅ 
// Allocate memory to store first 5 odd numbers, than reallocate it to store first 6 even numbers.
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;

    ptr = (int *) calloc(5, sizeof(int));

    printf("(: Enter Odd Numbers :) \n");

    for(int i=0; i<5; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<5; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    printf("(: Enter Even Numbers :) \n");

    ptr = realloc(ptr, 6*sizeof(int));

    for(int i=0; i<6; i++) {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<6; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}
*/

