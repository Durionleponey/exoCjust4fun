#include <stdbool.h>
#include <stdio.h>


// ✅ Énoncé :
// Crée une variable int a = 42;
// Crée un pointeur int* p = &a;
// Crée un pointeur vers le pointeur : int** pp = &p;
// Affiche :
// La valeur de a (normal)
// L’adresse de a
// L’adresse de p
// La valeur de p
// L’adresse de pp
// La valeur de pp
// Et surtout : **pp → tu devrais obtenir 42

void printBit(unsigned char b) {

    for (int i = 7; i >= 0; i--) {
        printf("valeur en bit --> %i\n",(b >> i) & 1);
    }

}



int main(void) {
    int a = 42;
    int* p = &a;
    int** pp = &p;


    printf("valeur de a -->%i\n",a);
    printf("adresse de a -->%p\n",&a);
    printf("valeur de p -->%p\n",p);
    printf("adresse de p -->%p\n",&p);
    printf("valeur de pp -->%p\n",pp);
    printf("adresse de pp -->%p\n",&pp);

    printf("valeur de *pp %p\n",*pp);

    printf("valeur de **pp %i\n",**pp);




    }







