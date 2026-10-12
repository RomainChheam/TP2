#include <stdio.h>

int main() {
    int distance_km = 100;
    int vitesse_kmh = 50;
    int temps = distance_km / vitesse_kmh; 
    int minutes = temps * 60;
    printf("minutes = %d\n", minutes); 
    return 0;
}

// L'erreur ici c'est que les variables temps et minutes ont une valeur différente à celle qui leur est imposée.
// or, ces variables ont leur valeur imposée après donc ça marche au final donc il n'y a pas forcément d'erreur.