// Strings ✅ 
/*
#include<stdio.h>

int main() {
    // char name[] = {'B', 'I', 'K', 'R', 'A', 'M', '\0'};
    char name[] = "BIKRAM";

    printf("%s\n", name);

    return 0;
}
*/

// Question : 1 ✅ 
// Create a String firstName & lastName to store details of user & print all the characters using a loop.
/*
#include<stdio.h>

void printString(char name[]);

int main() {
    char firstName[] = "BIKRAM";
    char lastName[] = "MANDAL";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char name[]) {
    for (int i=0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
}
*/

// String Format Specifier ✅ 
/*
#include<stdio.h>

int main() {
    char name[50];
    scanf("%s", name);

    printf("Your name is: %s", name);

    return 0;
}
*/

// Question : 2 ✅
// Ask the user to enter their firstName & print it back to tham.
/*
#include<stdio.h>

int main() {
    char firstName[50];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Your first name is: %s", firstName);

    return 0;
}
*/

// Also try this with fullName. ✅
/*
#include<stdio.h>

int main() {
    char fullName[100];

    printf("Enter your full name: ");
    scanf("%s", fullName);

    printf("Your full name is: %s", fullName);

    return 0;
}
*/

// String Functions ✅ 
// gets(str)
// puts(str)
/*
#include<stdio.h>

int main() {
    char str[100];

    gets(str);
    puts(str);

    return 0;
}
*/

// fgets( str, n, file) ✅
/*
#include<stdio.h>

int main() {
    char str[100];

    fgets(str, 100, stdin);
    puts(str);

    return 0;
}
*/

// String using Pointers ✅ 
/*
#include<stdio.h>

int main() {
    char *str = "Hello World";

    printf("%s", str);

    return 0;
}
*/

/*
#include<stdio.h>

int main() {
    char *canChange = "Hello World";
    puts(canChange);

    canChange = "Hello";
    puts(canChange);


    char cannotChange[] = "Hello World";
    puts(cannotChange);
    // cannotChange = "Hello"; // Can't change ❌

    return 0;
}
*/

// Question : 3 ✅ 
// Make a program that inputs user's name & prints its length.
/*
#include<stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    fgets(name, 100, stdin);                   

    printf("Your name is: %s", name);
    printf("Length of your name is: %d", strlen(name));

    return 0;
}
*/

// Standard Library Functions ✅
/*
#include<stdio.h>
#include<string.h>

int main() {
    char name[] = "Bikram";
    printf("%d", strlen(name));

    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

int main() {
    char oldString[] = "Hello";
    char newString[] = "World";

    strcpy(oldString, newString);
    printf("%s", oldString);

    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100] = "Hello";
    char str2[] = "World";

    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

int main() {
    char fistStr[] = "Banana";
    char secondStr[] = "Apple";
    
    printf("%d \n", strcmp(fistStr, secondStr));
    printf("%d \n", strcmp(secondStr, fistStr));

    return 0;
}
*/

// Question : 4 ✅ 
// Take a string input from the user using %c.
/*
#include<stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }

    str[i] = '\0';
    puts(str);

    return 0;
}
*/

// Question : 5 ✅ 
// Find the salted form of a password entered by the user if the salt is "123" & added at the and.
/*
#include<stdio.h>
#include<string.h>

int main() {
    char password[100];
    char salt[] = "123";

    printf("Enter your password : ");
    scanf("%s", password);

    strcat(password, salt);

    printf("Your salted password is : %s \n", password);

    return 0;
}
*/

// Question : 6 ✅ 
// Write a function named slice, which takes a string & returns a sliced string from index n to m.
/*
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char *slice(char *str, int n, int m);
char _slice(char str[], int n, int m);

int main() {
    char str[100];
    int n, m;

    printf("Enter a string : ");
    scanf("%s", str);

    printf("Enter the starting index : ");

    scanf("%d", &n);

    printf("Enter the ending index : ");
    scanf("%d", &m);

    // printf("The sliced string is : %s \n", slice(str, n, m));
    _slice(str, n, m);

    return 0;
}

char *slice(char *str, int n, int m) {
    char *new_str = (char *)malloc(sizeof(char) * (m - n + 1));

    for(int i = n; i < m; i++) {
        new_str[i - n] = str[i];
    }

    new_str[m - n] = '\0';

    return new_str;
}

char _slice(char str[], int n, int m) {
    char new_str[100];
    int j = 0;

    for(int i = n; i < m; i++, j++) {
        new_str[j] = str[i];
    }

    new_str[j] = '\0';
    puts(new_str);
}
*/

// Question : 7 ✅ 
// Write a function to count the occurrence of vowels in a string. 
/*
#include<stdio.h>

void count_vowels(char str[]);

int main() {
    char str[100];

    printf("Enter a string : ");
    scanf("%s", str);

    count_vowels(str);

    return 0;
}

void count_vowels(char str[]) {
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    printf("The number of vowels in the string is : %d \n", count);
}
*/

// Question : 8 ✅ 
// Check if a given character is present in a string or not.
/*
#include<stdio.h>

int main() {
    char str[100];
    char ch;

    printf("Enter a string : ");
    scanf("%s", str);

    printf("Enter a character : ");
    scanf(" %c", &ch);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("The character is present in the string. \n");
            return 0;
        }
    }

    printf("The character is not present in the string. \n");

    return 0;
}
*/

