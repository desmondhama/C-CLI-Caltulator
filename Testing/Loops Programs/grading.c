#include <stdio.h>

// Function prototype for Grade
void Grade(int score);

int main() {
    // Error message to display for invalid values
    char error[] = "You've entered an invalid value! cannot compute";
    
    // Variable to hold the student's score
    int studentScore;
    
    // Prompt the user for their score
    printf("What is your score: ");
    scanf("%d", &studentScore);
    
    // Check if the score is within the valid range
    if (studentScore < 0 || studentScore > 100) {
        // Print error message if the score is invalid
        printf("%s\n", error);
    } else {
        // Call the Grade function to determine and print the grade
        Grade(studentScore); 
    }
    
    return 0;
}

// Function to determine and print the grade based on the score
void Grade(int score) {
    if (score >= 80 && score <= 100) {
        printf("A+\n");
    } else if (score >= 70 && score < 80) {
        printf("A-\n");
    } else if (score >= 60 && score < 70) {
        printf("A\n");
    } else if (score >= 50 && score < 60) {
        printf("B\n");
    } else if (score >= 40 && score < 50) {
        printf("C\n");
    } else if (score >= 30 && score < 40) {
        printf("D\n");
    } else if (score >= 20 && score < 30) {
        printf("E\n");
    } else if (score >= 10 && score < 20) {
        printf("F\n");
    } else if (score >= 0 && score < 10) {
        printf("G\n");
    }
}