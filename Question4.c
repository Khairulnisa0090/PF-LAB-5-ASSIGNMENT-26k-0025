#include <stdio.h>
int main()
{
    int category, choice;

    printf("===== AI CHATBOT =====\n");

    printf("\nSelect a Category:\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");

    printf("\nEnter your category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("\n1. Hello\n");
            printf("2. How are you\n");
            printf("3. Goodbye\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Chatbot: Hello! Welcome.\n");
                    break;

                case 2:
                    printf("Chatbot: I am fine. How are you?\n");
                    break;

                case 3:
                    printf("Chatbot: Goodbye! Have a nice day.\n");
                    break;

                default:
                    printf("Invalid greeting choice.\n");
            }
            break;

        case 2:
            printf("\n1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Chatbot: Programming helps us write code.\n");
                    break;

                case 2:
                    printf("Chatbot: Mathematics helps us solve problems.\n");
                    break;

                case 3:
                    printf("Chatbot: AI enables machines to perform intelligent tasks.\n");
                    break;

                default:
                    printf("Invalid study choice.\n");
            }
            break;

        case 3:
            printf("\n1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Chatbot: Here is today's weather information.\n");
                    break;

                case 2:
                    printf("Chatbot: Here is tomorrow's weather information.\n");
                    break;

                case 3:
                    printf("Chatbot: Here is the weather forecast.\n");
                    break;

                default:
                    printf("Invalid weather choice.\n");
            }
            break;

        case 4:
            printf("\n1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Chatbot: I am a simple rule-based chatbot.\n");
                    break;

                case 2:
                    printf("Chatbot: Select a category and then a choice.\n");
                    break;

                case 3:
                    printf("Chatbot: Exiting. Goodbye!\n");
                    break;

                default:
                    printf("Invalid help choice.\n");
            }
            break;

        default:
            printf("Invalid category.\n");
    }

    return 0;
}