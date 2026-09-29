#include <stdio.h>

int main()
{
    float confidence, threshold;

    printf("===== AI CONFIDENCE SYSTEM =====\n");

    printf("Enter model confidence (0-100): ");
    scanf("%f", &confidence);

    printf("Enter required confidence threshold (0-100): ");
    scanf("%f", &threshold);

    // Input validation
    if (confidence < 0 || confidence > 100 ||
        threshold < 0 || threshold > 100)
    {
        printf("Invalid input! Enter values between 0 and 100.\n");
    }
    else
    {
        // Confidence classification
        if (confidence >= 90)
        {
            printf("Confidence Level: Very High\n");
        }
        else if (confidence >= 75)
        {
            printf("Confidence Level: High\n");
        }
        else if (confidence >= 50)
        {
            printf("Confidence Level: Moderate\n");
        }
        else
        {
            printf("Confidence Level: Low\n");
        }

        // Prediction acceptance
        if (confidence >= threshold && confidence >= 50)
        {
            printf("Prediction Accepted.\n");
        }
        else
        {
            printf("Prediction Rejected.\n");
        }
    }

    return 0;
}