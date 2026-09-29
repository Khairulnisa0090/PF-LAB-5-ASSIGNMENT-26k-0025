#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int choice;
    double num, base, exponent, result;

    printf("===== AI MATHEMATICAL CALCULATOR =====\n");

    printf("\n1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);

            if (num >= 0)
            {
                result = sqrt(num);
                printf("Square Root = %.2lf\n", result);
            }
            else
            {
                printf("Invalid input! Negative number has no real square root.\n");
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &base);

            printf("Enter exponent: ");
            scanf("%lf", &exponent);

            if (base == 0 && exponent < 0)
            {
                printf("Invalid input! Zero cannot have a negative exponent.\n");
            }
            else
            {
                result = pow(base, exponent);
                printf("Power = %.2lf\n", result);
            }
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num);

            result = fabs(num);
            printf("Absolute Value = %.2lf\n", result);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &num);

            result = floor(num);
            printf("Floor = %.2lf\n", result);
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num);

            result = ceil(num);
            printf("Ceiling = %.2lf\n", result);
            break;

        default:
            printf("Invalid menu choice!\n");
    }

    return 0;
}