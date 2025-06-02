#include <stdio.h>

int main() {
    char str[200];
    int length = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);  // lire avec espaces

    // Compter manuellement la longueur sans strlen
    while (str[length] != '\0') {
        // on ne compte pas le caractère de fin de ligne '\n'
        if (str[length] == '\n') {
            break;
        }
        length++;
    }

    // Affichage
    printf("Longueur de la chaîne : %d\n", length);

    return 0;
}
