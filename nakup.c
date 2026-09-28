#include <stdio.h>

int main() {
    char name1[30], name2[30], name3[30];
    float price1, price2, price3;
    int pieces1, pieces2, pieces3;

    printf("Product 1: ");
    scanf("%s %f %d", name1, &price1, &pieces1);

    printf("Product 2: ");
    scanf("%s %f %d", name2, &price2, &pieces2);

    printf("Product 3: ");
    scanf("%s %f %d", name3, &price3, &pieces3);

    float total = price1 * pieces1 + price2 * pieces2 + price3 * pieces3;

    printf("\n%s: %.2f EUR x %d\n", name1, price1, pieces1);
    printf("%s: %.2f EUR x %d\n", name2, price2, pieces2);
    printf("%s: %.2f EUR x %d\n", name3, price3, pieces3);
    printf("Total: %.2f EUR\n", total);



if (total > 50) {
    float finalPrice = total * 0.90;
    printf("Price after 10%% discount: %.2f EUR\n", finalPrice);
}

    return 0;
}