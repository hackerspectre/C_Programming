// File IO ✅ 
// Operation on Files ✅ 

#include <stdio.h>
#include <stdlib.h>

// Function to check if a file exists
int check_file_exists(FILE *fptr) {
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 0; // Return false
    }
    return 1; // Return true
}

int main() {
    FILE *fptr;
    char ch;
    int num, a, b, n;
    char name[20];
    int roll;
    float marks;

    // 1. Operation on Files
    fptr = fopen("sample.txt", "r");
    if (!check_file_exists(fptr)) return 1;
    fclose(fptr);

    // 2. BEST PRACTICE: Check if a file exists before reading from it
    fptr = fopen("sample.txt", "r");
    if (!check_file_exists(fptr)) return 1;
    printf("File exists.\n");
    fclose(fptr);

    // 3. Reading from a file
    fptr = fopen("sample.txt", "r");
    if (!check_file_exists(fptr)) return 1;
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);

    // 4. Writing to a file
    fptr = fopen("sample.txt", "w");
    if (!check_file_exists(fptr)) return 1;
    fprintf(fptr, "Mango");
    fclose(fptr);

    // 5. EOF (End Of File) Handling
    fptr = fopen("sample.txt", "r");
    if (!check_file_exists(fptr)) return 1;
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);

    // 6. Question 2: Read 5 integers from a file and display them
    fptr = fopen("sample.txt", "r");
    if (!check_file_exists(fptr)) return 1;
    for (int i = 0; i < 5; i++) {
        fscanf(fptr, "%d", &num);
        printf("Number = %d\n", num);
    }
    fclose(fptr);

    // 7. Question 3: Input student information and enter it to a file
    fptr = fopen("Student.txt", "w");
    if (!check_file_exists(fptr)) return 1;
    printf("Enter your name: ");
    scanf("%19s", name);  // Prevent buffer overflow

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    fprintf(fptr, "Name = %s\n", name);
    fprintf(fptr, "Roll = %d\n", roll);
    fprintf(fptr, "Marks = %.2f\n", marks);
    fclose(fptr);

    // 8. Question 4: Write all odd numbers from 1 to n in a file
    fptr = fopen("OddNumbers.txt", "w");
    if (!check_file_exists(fptr)) return 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);

    // 9. Question 5: Replace 2 numbers a & b with their sum in the file
    fptr = fopen("Numbers.txt", "r");
    if (!check_file_exists(fptr)) return 1;
    fscanf(fptr, "%d %d", &a, &b);
    fclose(fptr);

    fptr = fopen("Numbers.txt", "w");
    if (!check_file_exists(fptr)) return 1;
    fprintf(fptr, "%d", a + b);
    fclose(fptr);

    return 0;
}


