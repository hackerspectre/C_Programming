// 1. Type Declaration Instructions ✅ 
/*
#include <stdio.h>

int main()
{
    int age = 22;
    int oldAge = age;
    int newAge = oldAge + 1;
    printf("New age is: %d \n", newAge);

    int rupee = 1, dollar;
    dollar = 74;

    // Wrong Declaration Order
    // order of declaration is important -
    float pi = 3.14;
    // float area = pi * rad * rad;  //Worng
    float rad = 3;

   // Valid  Declaration
   float pi = 3.14;
   float rad = 3;
   float area = pi * rad * rad;   //Right

   // Valid  Declaration
   int age1, age2, age3;
   age1 = age2 = age3 = 22;

   // Worng Declaration
   // int a1 = a2 = a3 = 22;  //Wrong

   return 0;
}
*/

// Operators Precedence and Associativity Rules 🔴
// 2. Arithmetic Instructions ✅
/*
#include<stdio.h>

int main() {
    int a = 1, b = 2, c = 3;

    //Valid
    a = b + c;  // Right

    //Invalid
    b + c = a ;  // Wrong

    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);
    return 0;
}
*/

// Type Conversion in C 🔵
/*
#include<stdio.h>

int main() {
    printf("sum of 2 & 3 : %d \n", 2 + 3);
    printf("sum of 2.0 & 3 : %f \n", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %f \n", 2.0 + 3.0);
    return 0;
}
*/

// Associativity ✅
/*
#include<stdio.h>

int main() {
    printf("Output: %d", 5+2/2*3);
    return 0;
}
*/

// 3. Relational Operator ✅
/*
#include<stdio.h>

 int main() {
    printf("%d \n", 4==4);
    printf("%d \n", 4<3);
    printf("%d \n", 3<4);
    printf("%d \n", 4<4);
    printf("%d \n", 4<=4);
    printf("%d \n", 4>3);
    printf("%d \n", 3>4);
    printf("%d \n", 4>4);
    printf("%d \n", 4>=4);
    printf("%d \n", 4!=4);
    printf("%d \n", 3!=4);
    return 0;
}
*/

// 4. Logical Operator ✅
/*
#include<stdio.h>

int main() {
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3>4 && 5>4);
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", !(3<4 && 3<5));
    printf("%d \n", !(4<3 || 5<3));
    return 0;
}
*/

// 5. Assignment Operator ✅
/*
#include<stdio.h>

int main() {
    int a = 10;
    a += 10;
    printf("a+10 = %d \n", a);
    a -= 10;
    printf("a-10 = %d \n", a);
    a *= 10;
    printf("a*10 = %d \n", a);
    a /= 10;
    printf("a/10 = %d \n", a);
    a %= 10;
    printf("a%c10 = %d \n", '%', a);
    return 0;
}
*/

// Arithmetic Operators ✅ 
// Question 1 : Shows the use of integer arithmetic to convert a given number of days into months and days.
/*
#include <stdio.h>

int main() {
    int months, days;

    printf("Enter days: ");
    scanf("%d", &days);

    months = days / 30;
    days = days % 30;

    printf("Months: %d\nDays: %d\n", months, days);

    return 0;
}
*/

