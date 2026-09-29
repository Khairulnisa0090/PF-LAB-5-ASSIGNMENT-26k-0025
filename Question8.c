#include <stdio.h>

int main()
{
    int permission;

    printf("===== AI MODEL PERMISSION SYSTEM =====\n");

    printf("Enter permission value: ");
    scanf("%d", &permission);

    if (permission < 0 || permission > 15)
    {
        printf("Invalid permission value.\n");
        return 0;
    }

    // Check individual permissions
    if (permission & 1)
        printf("View: Allowed\n");
    else
        printf("View: Not Allowed\n");

    if (permission & 2)
        printf("Train: Allowed\n");
    else
        printf("Train: Not Allowed\n");

    if (permission & 4)
        printf("Test: Allowed\n");
    else
        printf("Test: Not Allowed\n");

    if (permission & 8)
        printf("Deploy: Allowed\n");
    else
        printf("Deploy: Not Allowed\n");

    // Check both Training and Deployment
    if ((permission & 2) && (permission & 8))
    {
        printf("Training and Deployment: Both Allowed\n");
    }
    else
    {
        printf("Training and Deployment: Both Not Allowed Together\n");
    }

    return 0;
}