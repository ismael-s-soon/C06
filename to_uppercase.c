#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); // lire la chaîne avec espaces

    // Affiche la chaîne d’origine
    printf("%s", str);

    // Transformation en majuscules
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // ou -32
        }
        i++;
    }

    // Affiche la chaîne en majuscules
    printf("%s", str);

    return 0;
}
