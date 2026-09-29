#include <stdio.h>

int main()
{
    int age, creditScore;
    float income;
    char existingLoan;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    printf("Existing loan? (Y/N): ");
    scanf(" %c", &existingLoan);

    // Input Validation
    if (age <= 0 || income < 0 || creditScore < 0 ||
        (existingLoan != 'Y' && existingLoan != 'y' &&
         existingLoan != 'N' && existingLoan != 'n'))
    {
        printf("Invalid input!\n");
        return 1;
    }

    // Loan Eligibility Decisions
    if (age >= 21)
    {
        if (income >= 100000 && creditScore >= 750 &&
            (existingLoan == 'N' || existingLoan == 'n'))
        {
            printf("High Approval Chance\n");
        }
        else if (income >= 75000 && creditScore >= 650 &&
                 (existingLoan == 'Y' || existingLoan == 'y'))
        {
            printf("Manual Review\n");
        }
        else if (income >= 50000 && creditScore >= 600)
        {
            printf("Possibly Eligible\n");
        }
        else
        {
            printf("Rejected\n");
        }
    }
    else
    {
        printf("Rejected\n");
    }

    return 0;
}