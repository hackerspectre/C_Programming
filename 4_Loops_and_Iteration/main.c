// Loop Control Statements ✅ 
// 1. for loop ✅
/*
#include<stdio.h>

int main() {
    for(int i=1; i<=5; i++) {
        printf("Hello World \n");
    }
    
    return 0;
}
*/

/*
#include<stdio.h>

int main() {
    for(int i=1; i<=100; i++) {
        printf("%d \n", i);
    }

    return 0;
}
*/

/*
#include<stdio.h>

int main() {
    for(int i=10; i>=1; i--) {
        printf("%d \n", i);
    }

    return 0;
}
*/

//Question : 1 ✅ 
// Print the number from 0 to 10
/*
#include<stdio.h>

int main() {
    for(int i=0; i<=10; i++) {
        printf("%d \n", i);
    }

    return 0;
}
*/

// Special Things ✅ 
/*
#include<stdio.h>

int main() {
    for(float i=1.0; i<=5.0; i++) {
        printf("%.2f \n", i);
    }

    return 0;
}
*/

/*
#include<stdio.h>

int main() {
    for(char ch='a'; ch<='z'; ch++) {
        printf("%c ", ch);
    }

    return 0;
}
*/

// Infinite Loop ✅  //can't run this program with any system
/*
#include<stdio.h>

int main() {
    for(int i=1; ; i++) {
        printf("Hello World \n");
    }

    return 0;
}
*/

// 2. While Loop ✅ 
/*
#include<stdio.h>

int main() {
    int i=1;
    while(i<=5) {
        printf("Hello World! \n");
        i++;
    }

    return 0;
}
*/

// Question : 2 ✅
// Print the numbers from 0 to n, if n is given by user 
/*
#include<stdio.h>

int main() {
    int num;
    int i = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(i <= num) {
        printf("%d \n", i);
        i++;
    }

    return 0;
}
*/

// Do While Loop ✅ 
/*
#include<stdio.h>

int main() {
    int i = 1;
    
    do {
        printf("Hello World! \n");
        i++;
    } while (i <= 5);
    
    return 0;
}
*/

// Question : 3 ✅ 
// Print the Sum of First n Natural Numbers, if n is given by user.
/*
#include<stdio.h>

int main() {
    int num;
    int i = 0;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(i <= num) {
        sum = sum + i;
        i++;
    }

    printf("Sum is: %d \n", sum);
    return 0;
}
*/

// Also, Print tham reverce.
/*
#include<stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=0; i<=num; i++) {
        sum = sum + i;
    }

    printf("Sum is: %d \n", sum);

    for(int i=num; i>=1; i--) {
        printf("%d \n", i);
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=1, j=num; i<=num && j>=1; i++, j--) {
        sum = sum + i;  //sum += i;
        printf("%d \n", j);
    }

    printf("Sum is: %d \n", sum);
    return 0;
}
*/

/*
#include<stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enetr number: ");
    scanf("%d", &num);

    for(int j=num; j>=1; j--) {
        sum += j;
        printf("%d \n", j);
    }

    printf("Sum is: %d", sum);
    return 0;
}
*/

// Question : 4 ✅ 
// Print the table of a number intput by the user. 
/*
#include<stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d \n", num, i, num*i);
    }

    return 0;
}
*/

// break Statement ✅ 
/*
#include<stdio.h>

int main() {
    for(int i=1; i<=5; i++) {
        if (i == 3) {
            break;
        } 
        printf("%d \n", i);
    }

    return 0;
}
*/

// Question : 5 ✅ 
// Keep taking numbers as input from user until user enters an odd number. 
/*
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter number: ");
        scanf("%d", &num);
        printf("%d \n", num);

        if(num % 2 != 0) {
            break;
        }

    } while(1);

    printf("You enter odd number!");
    return 0;
}
*/

// Question : 6 ✅ 
// Keep taking numbers as input from user until user enters a number which is multiple of 7.
/*
#include<stdio.h>

int main() {
    int num;

    do {
        printf("Enter number: ");
        scanf("%d", &num);
        printf("%d \n", num);

        if(num % 7 == 0) {
            break;
        }

    } while(1);

    printf("You enter a number which is multiple of 7!");
    return 0;
}
*/

// continue Statement ✅ 
/*
#include<stdio.h>

int main() {
    for(int i=1; i<=5; i++) {
        if(i == 3) {
            continue;
        }

        printf("%d \n", i);
    }

    return 0;
}
*/

// Question : 7 ✅ 
// Print all the numbers from 1 to 10 except for 6.
/*
#include<stdio.h>

int main() {
    for(int i=1; i<=10; i++) {
        if(i == 6) {
            continue;
        }

        printf("%d \n", i);
    }

    return 0;
}
*/

// Question : 8 ✅ 
// Print all the numbers from 1 to 10 except for 6 and 7.
/*
#include<stdio.h>

int main() {
    for(int i=1; i<=10; i++) {
        if(i == 6 || i == 7) {
            continue;
        }

        printf("%d \n", i);
    }

    return 0;
}
*/

// Question : 9 ✅ 
// Print all the odd numbers from 5 to 50. 
/*
#include <stdio.h>

int main() {
    for(int i=5; i<=50; i++) {
        if(i % 2 == 0) {
            continue;
        }

        printf("%d \n", i);
    }

    return 0;
}
*/

// Question : 10 ✅ 
// Print all the even numbers from 5 to 50.
/*
#include <stdio.h>

int main() {
    for(int i=5; i<=50; i++) {
        if(i % 2 != 0) {
            continue;
        }

        printf("%d \n", i);
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for(int i=5; i<=50; i++) {
        //odd
        if(i % 2 != 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for(int i=5; i<=50; i++) {
        //even
        if(i % 2 == 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}
*/

// Question : 11 ✅ 
// Print the factorial of a number n.
/*
#include<stdio.h>

int main() {
    int num;
    int factorial = 1;

    printf("Enter factorial number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        factorial = factorial * i;
    }

    printf("Factorial number is: %d", factorial);
    return 0;
}
*/

// Question : 12 ✅ 
// Print reverse of the table for a number n.
/*
#include<stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=10; i>=1; i--) {
        printf("%d x %d = %d \n", num, i, num * i);
    }

    return 0;
}
*/

// Question : 13 ✅ 
// Calculate the sum of all numbers between 5 and 50. (including 5 & 50)
/*
#include<stdio.h>
int total = 0;
int main() {
    for(int i=5; i<=50; i++) {
        total += i;
    }

    printf("Total is: %d", total);
    return 0;
}
*/


