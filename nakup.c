#include <stdio.h>

int main(void) {
    int amount;
    int price, pieces;
    int total = 0;
    char name[50];

    printf("How many products? ");
    scanf("%d", &amount);

    printf("\n--- Enter your products ---\n");

    for (int i = 0; i < amount; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("Name: ");
        scanf("%s", name);

        printf("Price: ");
        scanf("%d", &price);

        printf("Pieces: ");
        scanf("%d", &pieces);

        total += price * pieces;
    }

    printf("\n\n========== RECEIPT ==========\n");

    printf("Total: %d EUR\n", total);

    if (total > 50) {
        float finalPrice = total * 0.90;

        printf("Discount: 10%%\n");
        printf("Final price: %.2f EUR\n", finalPrice);
    } else {
        printf("Final price: %d EUR\n", total);
    }

    printf("=============================\n");

    return 0;
}
