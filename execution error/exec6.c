#include <stdio.h>

int main() {
    char nom[4];
    printf("Nom ? ");
    scanf("%s", &nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}

// manquait le & dans le scanf