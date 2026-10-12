#include <stdio.h>
#include <string.h>

int main(void) {

    char slovo[50];
    printf("Zadajte slovo, a zistim, ci je palindrom: \n");
    scanf("%s", slovo);
    printf("%s\n", slovo);

    int dlzka = strlen(slovo);
    int res;

    char obratene_slovo[50];

    strrev(slovo);
    if (strcmp(slovo, obratene_slovo) == 0) {
        printf("Slovo je palindrom\n");
    } else {
        printf("Slovo nie je palindrom\n");
    }
    printf("Dlhe je:  znakov %d\n", dlzka);
}