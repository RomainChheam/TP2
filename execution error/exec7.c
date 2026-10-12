#include <stdio.h>

int main() {
    float distance_km = 100;
    float vitesse_kmh = 26;
    float temps = distance_km / vitesse_kmh; 
    float minutes = temps * 60;
    printf("minutes = %.2f\n", minutes); 
    return 0;
}

// L'erreur ici c'est que les variables temps et minutes ont une valeur différente à celle qui leur est imposée.
// or, ces variables ont leur valeur imposée après donc ça marche au final donc il n'y a pas forcément d'erreur.
// Remplacement du int par float pour permettre les valeurs à virgule.