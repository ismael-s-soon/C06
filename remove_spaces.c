#include <stdio.h>

int main() {
    char str[200];
    char cleaned[200];
    int i = 0, j = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); // permet de lire avec espaces

    // Parcours de la chaîne d’origine
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            cleaned[j] = str[i];
            j++;
        }
        i++;
    }

    // Fin de la chaîne nettoyée
    cleaned[j] = '\0';

    // Affichage des résultats
    printf("%s", str);       // affiche la chaîne originale
    printf("%s", cleaned);   // affiche la chaîne sans espaces

    return 0;
}
