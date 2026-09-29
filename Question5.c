#include <stdio.h>

int main()
{
    float confidence;
    int userType;

    printf("===== SMART SECURITY SYSTEM =====\n");

    printf("Enter face recognition confidence (0-100): ");
    scanf("%f", &confidence);

    printf("\nSelect User Type:\n");
    printf("1. Authorized\n");
    printf("2. Unauthorized\n");

    printf("Enter user type: ");
    scanf("%d", &userType);

    // Input validation
    if (confidence < 0 || confidence > 100 ||
        (userType != 1 && userType != 2))
    {
        printf("Invalid input.\n");
    }
    else
    {
        // Ternary operator
        char *status = (confidence >= 80)
                       ? "Face Recognized"
                       : (confidence >= 50)
                       ? "Manual Verification Required"
                       : "Face Not Recognized";

        printf("\nRecognition Status: %s\n", status);

        // Nested if-else
        if (confidence >= 80)
        {
            if (userType == 1)
            {
                printf("Access Granted.\n");
            }
            else
            {
                printf("Access Denied: Unauthorized User.\n");
            }
        }
        else if (confidence >= 50 && confidence < 80)
        {
            printf("Manual Verification Required.\n");
        }
        else if (confidence < 50 || userType == 2)
        {
            printf("Access Denied.\n");
        }
    }

    return 0;
}