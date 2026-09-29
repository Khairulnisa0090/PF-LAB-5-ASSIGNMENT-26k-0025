#include <stdio.h>

int main() {
    float programming, maths, ai, attendance;
    float average;

    printf("Enter Programming marks: ");
    scanf("%f", &programming);

    printf("Enter Mathematics marks: ");
    scanf("%f", &maths);

    printf("Enter AI marks: ");
    scanf("%f", &ai);

    printf("Enter Attendance percentage: ");
    scanf("%f", &attendance);

    if (programming >= 50) {
        if (maths >= 50) {
            if (ai >= 50) {
                if (attendance >= 75) {
                    average = (programming + maths + ai) / 3;
                    printf("\nStudent is Eligible\n");
                    printf("Average Marks: %.2f\n", average);

                    if (average >= 80) {
                        printf("Performance: Excellent\n");
                    } else if (average >= 70) {
                        printf("Performance: Very Good\n");
                    } else if (average >= 60) {
                        printf("Performance: Good\n");
                    } else if (average >= 50) {
                        printf("Performance: Satisfactory\n");
                    } else {
                        printf("Performance: Poor\n");
                    }
                } else {
                    printf("Student is Not Eligible\n");
                }
            } else {
                printf("Student is Not Eligible\n");
            }
        } else {
            printf("Student is Not Eligible\n");
        }
    } else {
        printf("Student is Not Eligible\n");
    }

    return 0;
}