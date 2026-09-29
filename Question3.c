#include <stdio.h>

int main()
{
    int category, subcategory;

    printf("===== Image Classification System =====\n");

    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");

    printf("Select category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("\nAnimal Subcategories:\n");
            printf("1. Cat\n");
            printf("2. Dog\n");
            printf("3. Bird\n");

            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory)
            {
                case 1:
                    printf("Category: Animal\nSubcategory: Cat\n");
                    break;

                case 2:
                    printf("Category: Animal\nSubcategory: Dog\n");
                    break;

                case 3:
                    printf("Category: Animal\nSubcategory: Bird\n");
                    break;

                default:
                    printf("Invalid animal subcategory!\n");
            }
            break;

        case 2:
            printf("\nVehicle Subcategories:\n");
            printf("1. Car\n");
            printf("2. Bus\n");
            printf("3. Bike\n");

            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory)
            {
                case 1:
                    printf("Category: Vehicle\nSubcategory: Car\n");
                    break;

                case 2:
                    printf("Category: Vehicle\nSubcategory: Bus\n");
                    break;

                case 3:
                    printf("Category: Vehicle\nSubcategory: Bike\n");
                    break;

                default:
                    printf("Invalid vehicle subcategory!\n");
            }
            break;

        case 3:
            printf("\nFood Subcategories:\n");
            printf("1. Pizza\n");
            printf("2. Burger\n");
            printf("3. Biryani\n");

            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory)
            {
                case 1:
                    printf("Category: Food\nSubcategory: Pizza\n");
                    break;

                case 2:
                    printf("Category: Food\nSubcategory: Burger\n");
                    break;

                case 3:
                    printf("Category: Food\nSubcategory: Biryani\n");
                    break;

                default:
                    printf("Invalid food subcategory!\n");
            }
            break;

        case 4:
            printf("\nHuman Subcategories:\n");
            printf("1. Male\n");
            printf("2. Female\n");
            printf("3. Child\n");

            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory)
            {
                case 1:
                    printf("Category: Human\nSubcategory: Male\n");
                    break;

                case 2:
                    printf("Category: Human\nSubcategory: Female\n");
                    break;

                case 3:
                    printf("Category: Human\nSubcategory: Child\n");
                    break;

                default:
                    printf("Invalid human subcategory!\n");
            }
            break;

        default:
            printf("Invalid category!\n");
    }

    return 0;
}