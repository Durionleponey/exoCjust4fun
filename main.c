#include <stdbool.h>
#include <stdio.h>


// 🔹 Défi 1 : Lire chaque octet d’un int et afficher leur valeur + leur adresse
// Énoncé :
// Crée une variable int a = 258;
//
// Affiche sa valeur en décimal
//
// Parcours chaque octet de ce int (via cast en unsigned char*)
//
// Pour chaque octet :
//
// Affiche son adresse
//
// Affiche sa valeur en hexadécimal
//
// Affiche sa valeur en décimal

int main(void) {
    int a = 258;

    printf("--> valeur de a %d\n", a);

    unsigned char* pointeur = (unsigned char*)&a;


    for (int i = 0; i < sizeof(a); i++) {
        printf("--> valeur pointeur %p\n", pointeur);
        printf("--> valeur en decimal %d\n", *pointeur);
        printf("--> valuer en hexa %02x\n", *pointeur);
        pointeur++;

    }






}
