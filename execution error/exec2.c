#include <stdio.h>

int main() {
    int tab[10];
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}

// pas d'erreurs apparente mais la taille du tableau n'est pas assez grande pour toutes les valeurs qui y sont ajoutées.