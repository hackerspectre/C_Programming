// Conditional Statements ✅ 
// if-else ✅ 
/*
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote!");
    }
    else {
        printf("You can't vote!");
    }
    
    return 0;
}
*/

// Question 1 : Check if a number is odd or even. 
/*
#include <stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number %2 == 0){
        printf("Number is Odd");
    }
    else {
        printf("Number is Even");
    }
    
    return 0;
}
*/

// else-if ✅ 
/*
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 10){
        printf("You are a child.");
    }
    else if (age <= 17){
        printf("You are a teenager.");
    }
    else {
        printf("You are an adult.");
    }
    
    return 0;
}
*/

// Conditional Operators ✅ 
// Ternary ✅ 
/*
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("You can vote!") : printf("You can't vote!");

    return 0;
}
*/

// More Example with Ternary ✅ 
/*
#include <stdio.h>

int main() {
    int number;
    int luckyNumber = 7;

    printf("Enter number: ");
    scanf("%d", &number);

    (number == luckyNumber) ? printf("You are lucky.") : printf("You are not lucky.");
    
    return 0;
}
*/

// Conditional Operators ✅ 
// switch ✅ 
/*
#include <stdio.h>

int main() {
    int day = 5;

    switch(day) {
        case 1 : printf("monday \n");
            break;
        case 2 : printf("tuesday \n");
            break;
        case 3 : printf("wednesday \n");
            break;
        case 4 : printf("thursday \n");
            break;
        case 5 : printf("friday \n");
            break;
        case 6 : printf("saturday \n");
            break;
        case 7 : printf("sunday \n");
            break;
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    char day = 'f';

    switch(day) {
        case 'm' : printf("monday \n");
            break;
        case 't' : printf("tuesday \n");
            break;
        case 'w' : printf("wednesday \n");
            break;
        case 'T' : printf("thursday \n");
            break;
        case 'f' : printf("friday \n");
            break;
        case 's' : printf("saturday \n");
            break;
        case 'S' : printf("sunday \n");
            break;
    }

    return 0;
}
*/
