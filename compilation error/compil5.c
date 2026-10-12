#include <stdio.h>

int main() {
    char c = 'A';
    printf("c = %c\n", c);
    return 0;
}

// Il n'y a pas de message cette fois mais l'erreur est que %s est utilisé pour les strings, il faut mettre %c