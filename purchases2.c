#include <stdio.h>

typedef struct {
    int price;
    int pieces;
} Product;


int main(void) {
    Product products[10];

     int price[10];
     char name[50][10];
     int pieces[10];

    for (int i = 0; i < 10; i++) {
        printf("Product %d: ", i + 1);
        scanf("%s %d %d", name[i], &price[i], &pieces[i]);
    }

    float total = 0.0f;
    for (int i = 0; i < 10; i++) {
        total += price[i] * pieces[i];
    }

    printf("Total: %.2f EUR\n", total);

    if (total > 50) {
    float finalPrice = total * 0.90;
    printf("Price after 10%% discount: %.2f EUR\n", finalPrice);
}

    return 0;
}