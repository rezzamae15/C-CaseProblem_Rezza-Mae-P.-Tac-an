#include<stdio.h>

int main(){

    char name[] = "Rezza Mae P. Tac-an";  
    int id = 2025304092;           
    float grade;

    printf("Name: %s\n", name);
    printf("ID Number: %d\n", id);
    printf("----------------------\n");

    printf("Enter your grade: ");
    scanf("%f", &grade);

    printf("Result: ");

    if (grade >= 90 && grade <= 100) {
        printf("Excellent! You got an A.");
    } else if (grade >= 80 && grade < 90) {
        printf("Very Good! You got a B.");
    } else if (grade >= 70 && grade < 80) {
        printf("Good! You got a C.");
    } else if (grade >= 60 && grade < 70) {
        printf("Needs Improvement. You got a D.");
    } else if (grade >= 0 && grade < 60) {
        printf("Failed. You got an F.");
    } else {
        printf("Invalid grade input.\n");
    }

    return 0;
}