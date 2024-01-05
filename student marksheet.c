#include <stdio.h>

char calculateGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {

    int subject1, subject2, subject3;
    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);


    int total = subject1 + subject2 + subject3;
    float percentage = (float)total / 3;


    printf("\n---------- Marksheet ----------\n");
    printf("Subject 1: %d\n", subject1);
    printf("Subject 2: %d\n", subject2);
    printf("Subject 3: %d\n", subject3);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", calculateGrade(percentage));

    return 0;
}
