#include <stdio.h>

int main()
{
    int problem, algorithm;

    printf("===== AI MODEL SELECTION SYSTEM =====\n");

    printf("\nSelect Problem Type:\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");

    printf("\nEnter problem type: ");
    scanf("%d", &problem);

    switch (problem)
    {
        case 1:
            printf("\nClassification Algorithms:\n");
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");

            printf("Select algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("Selected: Logistic Regression\n");
                    break;

                case 2:
                    printf("Selected: Decision Tree\n");
                    break;

                case 3:
                    printf("Selected: KNN\n");
                    break;

                default:
                    printf("Invalid algorithm choice.\n");
            }
            break;

        case 2:
            printf("\nRegression Algorithms:\n");
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");

            printf("Select algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("Selected: Linear Regression\n");
                    break;

                case 2:
                    printf("Selected: Polynomial Regression\n");
                    break;

                case 3:
                    printf("Selected: SVR\n");
                    break;

                default:
                    printf("Invalid algorithm choice.\n");
            }
            break;

        case 3:
            printf("\nClustering Algorithms:\n");
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");

            printf("Select algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("Selected: K-Means\n");
                    break;

                case 2:
                    printf("Selected: Hierarchical Clustering\n");
                    break;

                case 3:
                    printf("Selected: DBSCAN\n");
                    break;

                default:
                    printf("Invalid algorithm choice.\n");
            }
            break;

        case 4:
            printf("\nComputer Vision Algorithms:\n");
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");

            printf("Select algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("Selected: CNN\n");
                    break;

                case 2:
                    printf("Selected: YOLO\n");
                    break;

                case 3:
                    printf("Selected: R-CNN\n");
                    break;

                default:
                    printf("Invalid algorithm choice.\n");
            }
            break;

        default:
            printf("Invalid problem type.\n");
    }

    return 0;
}