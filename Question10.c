#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence, modelScore;
    int datasetSize, role, status, permission;
    int deployPermission;
    int deploymentReady;

    char *roleName;
    char *statusName;

    printf("===== AI DECISION ENGINE =====\n");

    // Input Section
    printf("\nEnter Model Accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter Model Confidence (0-100): ");
    scanf("%f", &confidence);

    printf("Enter Dataset Size: ");
    scanf("%d", &datasetSize);

    printf("\nSelect User Role:\n");
    printf("1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");
    printf("Enter Role: ");
    scanf("%d", &role);

    printf("\nSelect Model Status:\n");
    printf("1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");
    printf("Enter Status: ");
    scanf("%d", &status);

    printf("\nEnter Permission Value (0-15): ");
    scanf("%d", &permission);

    // Input Validation
    if (accuracy < 0 || accuracy > 100 ||
        confidence < 0 || confidence > 100 ||
        datasetSize < 0 ||
        role < 1 || role > 3 ||
        status < 1 || status > 3 ||
        permission < 0 || permission > 15)
    {
        printf("\nInvalid Input!\n");
        return 0;
    }

    // Model Score Calculation
    modelScore = (accuracy + confidence) / 2.0;

    // Ternary Operator
    deployPermission = (permission & 8) ? 1 : 0;

    // Nested Switch-Case
    switch (role)
    {
        case 1:
            roleName = "Admin";

            switch (status)
            {
                case 1:
                    statusName = "Ready";
                    break;

                case 2:
                    statusName = "Testing";
                    break;

                case 3:
                    statusName = "Training";
                    break;
            }
            break;

        case 2:
            roleName = "Developer";

            switch (status)
            {
                case 1:
                    statusName = "Ready";
                    break;

                case 2:
                    statusName = "Testing";
                    break;

                case 3:
                    statusName = "Training";
                    break;
            }
            break;

        case 3:
            roleName = "Researcher";

            switch (status)
            {
                case 1:
                    statusName = "Ready";
                    break;

                case 2:
                    statusName = "Testing";
                    break;

                case 3:
                    statusName = "Training";
                    break;
            }
            break;
    }

    // Nested If-Else for Deployment Decision
    if (accuracy >= 80 && confidence >= 75)
    {
        if (datasetSize >= 1000 && status == 1)
        {
            if (deployPermission == 1)
            {
                deploymentReady = 1;
            }
            else
            {
                deploymentReady = 0;
            }
        }
        else
        {
            deploymentReady = 0;
        }
    }
    else
    {
        deploymentReady = 0;
    }

    // Display Model Information
    printf("\n===== MODEL INFORMATION =====\n");

    printf("Accuracy: %.2f%%\n", accuracy);
    printf("Confidence: %.2f%%\n", confidence);
    printf("Dataset Size: %d\n", datasetSize);
    printf("User Role: %s\n", roleName);
    printf("Model Status: %s\n", statusName);

    printf("Model Score: %.2f\n", modelScore);

    // Bitwise Permission Checks
    printf("\n===== USER PERMISSIONS =====\n");

    printf("View: %s\n",
           (permission & 1) ? "Allowed" : "Denied");

    printf("Train: %s\n",
           (permission & 2) ? "Allowed" : "Denied");

    printf("Test: %s\n",
           (permission & 4) ? "Allowed" : "Denied");

    printf("Deploy: %s\n",
           (permission & 8) ? "Allowed" : "Denied");

    // sizeof() Operator
    printf("\n===== SYSTEM INFORMATION =====\n");

    printf("Size of Accuracy Variable: %zu bytes\n",
           sizeof(accuracy));

    printf("Size of Permission Variable: %zu bytes\n",
           sizeof(permission));

    // math.h Function
    printf("Rounded Model Score: %.0f\n",
           round(modelScore));

    // Final Decision
    printf("\n===== FINAL DECISION =====\n");

    if (deploymentReady)
    {
        printf("Model is READY for Deployment.\n");
    }
    else
    {
        printf("Model is NOT READY for Deployment.\n");
    }

    return 0;
}