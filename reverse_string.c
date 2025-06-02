#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, length = 0;
    char temp;

    // Lire la chaîne de caractères
    printf("Entrez une chaîne : ");
    scanf("%s", str);

    // Calcul de la longueur de la chaîne manuellement
    while (str[length] != '\0') {
        length++;
    }

    // Inversion de la chaîne avec une boucle
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Affichage du résultat
    printf("Chaîne inversée : %s\n", str);

    return 0;
}
