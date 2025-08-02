// Structures ✅ 
// a collection of values of different data types 
/*
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};


int main() {
    struct student s1;
    strcpy(s1.name, "Bikram"); 
    s1.roll = 14;
    s1.cgpa = 9.8; 

    printf("The name of the student is: %s\n", s1.name); 
    printf("The roll number of the student is: %d\n", s1.roll); 
    printf("The cgpa of the student is: %f\n", s1.cgpa); 

    return 0;
}
*/

// Question : 1 ✅ 
// Write a program to store the data of 3 students.
// 1. Roll number
// 2. Name
// 3. CGPA
// 4. Print the data of all the students.
/*
#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1;
    strcpy(s1.name, "Bikram"); 
    s1.roll = 14;
    s1.cgpa = 9.8; 

    printf("The name of the 1st student is: %s\n", s1.name); 
    printf("The roll number of the 1st student is: %d\n", s1.roll); 
    printf("The cgpa of the 1st student is: %f\n", s1.cgpa); 

    printf("\n");

    struct student s2;
    strcpy(s2.name, "Tappu");
    s2.roll = 12;
    s2.cgpa = 9.9; 

    printf("The name of the 2nd student is: %s\n", s2.name); 
    printf("The roll number of the 2nd student is: %d\n", s2.roll); 
    printf("The cgpa of the 2nd student is: %f\n", s2.cgpa); 

    printf("\n");

    struct student s3;
    strcpy(s3.name, "Ronika");
    s3.roll = 18;
    s3.cgpa = 9.7; 

    printf("The name of the 3rd student is: %s\n", s3.name); 
    printf("The roll number of the 3rd student is: %d\n", s3.roll); 
    printf("The cgpa of the 3rd student is: %f\n", s3.cgpa); 
    
    return 0;
}
*/

// Array of Structures ✅ 
/*
#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student IT[100];

    //1st student
    strcpy(IT[0].name, "Bikram");
    IT[0].roll = 14;
    IT[0].cgpa = 9.8;

    printf("The name of the 1st student is: %s\n", IT[0].name); 
    printf("The roll number of the 1st student is: %d\n", IT[0].roll); 
    printf("The cgpa of the 1st student is: %f\n", IT[0].cgpa); 

    //2nd student
    strcpy(IT[1].name, "Tappu");
    IT[1].roll = 12;
    IT[1].cgpa = 9.9; 
    printf("The name of the 2nd student is: %s\n", IT[1].name); 
    printf("The roll number of the 2nd student is: %d\n", IT[1].roll); 
    printf("The cgpa of the 2nd student is: %f\n", IT[1].cgpa);

    //3rd student
    strcpy(IT[2].name, "Ronika");
    IT[2].roll = 18;
    IT[2].cgpa = 9.7; 
    
    printf("The name of the 3rd student is: %s\n", IT[2].name); 
    printf("The roll number of the 3rd student is: %d\n", IT[2].roll); 
    printf("The cgpa of the 3rd student is: %f\n", IT[2].cgpa); 

    return 0;
}
*/

// Initializing Structures ✅
/*
#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = { "Bikram", 16, 7.9};
    struct student s2 = { "Tappu", 15, 8.3};
    struct student s3 = { 0 };

    printf("The name of the 1st student is: %s\n", s1.name); 
    printf("The roll number of the 1st student is: %d\n", s1.roll); 
    printf("The cgpa of the 1st student is: %f\n", s1.cgpa);


    struct student IT[100] = {
        {"Bikram", 14, 9.8},
        {"Tappu", 12, 9.9},
        {"Susmita", 18, 9.7}
    };

    printf("The name of the 1st student is: %s\n", IT[0].name); 
    printf("The roll number of the 1st student is: %d\n", IT[0].roll); 
    printf("The cgpa of the 1st student is: %f\n", IT[0].cgpa); 

    printf("The name of the 2nd student is: %s\n", IT[1].name);
    printf("The roll number of the 2nd student is: %d\n", IT[1].roll); 
    printf("The cgpa of the 2nd student is: %f\n", IT[1].cgpa); 

    printf("The name of the 3rd student is: %s\n", IT[2].name); 
    printf("The roll number of the 3rd student is: %d\n", IT[2].roll); 
    printf("The cgpa of the 3rd student is: %f\n", IT[2].cgpa); 

    return 0;
}
*/

// Pointers to Structures ✅
/*
#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = { "Bikram", 16, 7.9};

    struct student *ptr = &s1;

    printf("The name of the 1st student is: %s\n", (*ptr).name); 
    printf("The roll number of the 1st student is: %d\n", (*ptr).roll); 
    printf("The cgpa of the 1st student is: %f\n", (*ptr).cgpa);

    // Arrow Operator ✅
    printf("The name of the 1st student is: %s\n", ptr->name); 
    printf("The roll number of the 1st student is: %d\n", ptr->roll); 
    printf("The cgpa of the 1st student is: %f\n", ptr->cgpa); 

    return 0;
}
*/

// Passing structure to function ✅
/*
#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1) {
    printf("(: Student Information :) \n");
    printf("The name of the 1st student is: %s\n", s1.name); 
    printf("The roll number of the 1st student is: %d\n", s1.roll); 
    printf("The cgpa of the 1st student is: %f\n", s1.cgpa); 
}

int main() {
    struct student s1 = { "Bikram", 16, 7.9};

    printInfo(s1);

    return 0;
}
*/

// typedef Keyword ✅
/*
#include<stdio.h>
#include<string.h>

typedef struct InformationTechnologyStudent {
    char name[100];
    int roll;
    float cgpa;
} ITS;  // ITS is a new data type 

int main() {
    //this is single line
    // ITS s1 = { "Bikram", 16, 7.9};

    //this is multiple line
    ITS s1;
    s1.roll;
    s1.cgpa;
    strcpy(s1.name, "Bikram");

    printf("Student name is: %s \n", s1.name);

    return 0;
}
*/

// Question : 2 ✅
// Enter address (house no, block, city, state) of 5 people. 
/*
#include<stdio.h>
#include<string.h>

struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
};

int main() {
    struct address address[5];
    for(int i=0; i<5; i++) {
        printf("Enter address of person %d \n", i+1);

        printf("Enter house no: ");
        scanf("%d", &address[i].houseno);

        printf("Enter block: ");
        scanf("%d", &address[i].block);

        printf("Enter city: ");
        scanf("%s", &address[i].city);

        printf("Enter state: ");
        scanf("%s", &address[i].state);

        printf("\n");
    }

    printf("\n");

    for(int i=0; i<5; i++) {
        printf("Address of person %d \n", i+1);

        printf("House no: %d \n", address[i].houseno);
        printf("Block: %d \n", address[i].block);
        printf("City: %s \n", address[i].city);
        printf("State: %s \n", address[i].state);

        printf("\n");
    }

    return 0;
}
*/

// Question : 3 ✅ 
// Create a structure to store vectors. Then make a function to return sum of 2 vectors.
/*
#include<stdio.h>
#include<string.h>

struct vector {
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2);

int main() {
    struct vector v1, v2, sum;

    printf("Enter vector 1 coordinates: \n");
    scanf("%d %d", &v1.x, &v1.y);

    printf("Enter vector 2 coordinates: \n");
    scanf("%d %d", &v2.x, &v2.y);

    sum = sumVector(v1, v2);

    printf("Sum of vectors is: (%d, %d)", sum.x, sum.y);

    return 0;
}

struct vector sumVector(struct vector v1, struct vector v2) {
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}
*/

// Question : 4 ✅ 
// Create a structure to store complex numbers. (use arrow operator)
/*
#include<stdio.h>
#include<string.h>

struct complex {
    int real;
    int imaginary;
};

// use arrow operator
int main() {
    struct complex c1, c2, sum;

    printf("Enter complex number 1: \n");
    scanf("%d %d", &c1.real, &c1.imaginary);
    
    printf("Enter complex number 2: \n");
    scanf("%d %d", &c2.real, &c2.imaginary);
    
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    printf("Sum of complex numbers is: %d + %di", sum.real, sum.imaginary);

    return 0;
}
*/

