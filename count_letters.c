#include <stdio.h>

int main() {
    char str[200];
    int i = 0, vowels = 0, consonants = 0;
    char c;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); // lecture avec espaces

    while (str[i] != '\0') {
        c = str[i];

        // Vérifie si c'est une lettre alphabétique
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Met en minuscule si nécessaire (sans tolower)
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A');
            }

            // Vérifie si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Voyelles : %d\n", vowels);
    printf("Consonnes : %d\n", consonants);

    return 0;
}
