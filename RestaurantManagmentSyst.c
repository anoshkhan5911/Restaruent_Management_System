#include <stdio.h>

int main() {
    int dealChoice, again;

    do {
        int total = 0, choice, itemCount = 0;


        printf("\033[1;33m\n=== Welcome To The Flavor Express ===\033[0m\n");
        printf("1. One Person Deal\n");
        printf("2. Couple Deal\n");
        printf("3. Family Deal\n");
        printf("Enter your deal choice: ");
        scanf("%d", &dealChoice);

        printf("\n========= ORDER DETAILS =========\n");

        switch (dealChoice) {
            case 1:
                printf("\n--- One Person Deal ---\n");

                printf("Choose a Burger:\n");
                printf("1. Zinger (Rs 400)\n2. Beef (Rs 450)\n3. Cheese (Rs 500)\n4. Andy Wala (Rs 550)\n5. None\n");
                scanf("%d", &choice);
                printf("Your Choice: %d\n", choice);
                switch (choice) {
                    case 1: printf("Zinger Burger - Rs 400\n"); total += 400; itemCount++; break;
                    case 2: printf("Beef Burger - Rs 450\n"); total += 450; itemCount++; break;
                    case 3: printf("Cheese Burger - Rs 500\n"); total += 500; itemCount++; break;
                    case 4: printf("Andy Wala Burger - Rs 550\n"); total += 550; itemCount++; break;
                    default: break;
                }

                printf("Choose Fries:\n");
                printf("1. Small (Rs 150)\n2. Large (Rs 250)\n3. None\n");
                scanf("%d", &choice);
                printf("Your Choice: %d\n", choice);
                switch (choice) {
                    case 1: printf("Small Fries - Rs 150\n"); total += 150; itemCount++; break;
                    case 2: printf("Large Fries - Rs 250\n"); total += 250; itemCount++; break;
                    default: break;
                }

                printf("Choose Drink:\n");
                printf("1. Pepsi\n2. 7Up\n3. Coke\n4. None\n");
                scanf("%d", &choice);
                printf("Your Choice: %d\n", choice);
                if (choice >= 1 && choice <= 3) {
                    printf("Cold Drink - Rs 100\n");
                    total += 100;
                    itemCount++;
                }
                break;

            case 2:
                printf("\n--- Couple Deal ---\n");

                for (int i = 1; i <= 2; i++) {
                    printf("Burger %d:\n1. Zinger (400)\n2. Cheese (500)\n3. None\n", i);
                    scanf("%d", &choice);
                    printf("Your Choice: %d\n", choice);
                    if (choice == 1) { printf("Zinger Burger %d - Rs 400\n", i); total += 400; itemCount++; }
                    else if (choice == 2) { printf("Cheese Burger %d - Rs 500\n", i); total += 500; itemCount++; }
                }

                printf("Add Pizza?\n1. Chicken Tikka (1400)\n2. Fajita (1450)\n3. None\n");
                scanf("%d", &choice);
                printf("Your Choice: %d\n", choice);
                if (choice == 1) { printf("Chicken Tikka Pizza - Rs 1400\n"); total += 1400; itemCount++; }
                else if (choice == 2) { printf("Chicken Fajita Pizza - Rs 1450\n"); total += 1450; itemCount++; }

                printf("Choose one Drink:\n1. Pepsi\n2. 7Up\n3. None\n");
                scanf("%d", &choice);
                printf("Your Choice: %d\n", choice);
                if (choice == 1 || choice == 2) {
                    printf("Cold Drink - Rs 100\n");
                    total += 100;
                    itemCount++;
                }
                break;

            case 3:
                printf("\n--- Family Deal ---\n");

                for (int i = 1; i <= 2; i++) {
                    printf("Pizza %d:\n1. Cheese (1500)\n2. Tikka (1400)\n3. None\n", i);
                    scanf("%d", &choice);
                    printf("Your Choice: %d\n", choice);
                    if (choice == 1) { printf("Cheese Pizza %d - Rs 1500\n", i); total += 1500; itemCount++; }
                    else if (choice == 2) { printf("Tikka Pizza %d - Rs 1400\n", i); total += 1400; itemCount++; }
                }

                for (int i = 1; i <= 2; i++) {
                    printf("Fries %d:\n1. Small (150)\n2. Large (250)\n3. None\n", i);
                    scanf("%d", &choice);
                    printf("Your Choice: %d\n", choice);
                    if (choice == 1) { printf("Small Fries %d - Rs 150\n", i); total += 150; itemCount++; }
                    else if (choice == 2) { printf("Large Fries %d - Rs 250\n", i); total += 250; itemCount++; }
                }

                for (int i = 1; i <= 2; i++) {
                    printf("Burger %d:\n1. Zinger (400)\n2. Cheese (500)\n3. None\n", i);
                    scanf("%d", &choice);
                    printf("Your Choice: %d\n", choice);
                    if (choice == 1) { printf("Zinger Burger %d - Rs 400\n", i); total += 400; itemCount++; }
                    else if (choice == 2) { printf("Cheese Burger %d - Rs 500\n", i); total += 500; itemCount++; }
                }

                break;

            default:
                printf("Invalid deal selected.\n");
        }

        printf("\033[1;33m\n=======================================\033[0m\n");
        printf("\033[1;33m           FINAL BILL RECEIPT          \033[0m\n");
        printf("\033[1;33m=======================================\033[0m\n");
        printf("  Number of Items: %d\n", itemCount);
        printf("\033[1;32m  Total Amount to Pay: Rs %d\033[0m\n", total);
        printf("\033[1;33m=======================================\033[0m\n");

        printf("Order again? (1 for Yes / 0 for No): ");
        scanf("%d", &again);

    } while (again == 1);

    printf("\nThank you for visiting our restaurant!\nWe hope to serve you again soon.\n");

    return 0;
}
