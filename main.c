#include <stdbool.h>
#include <stdio.h>

//en gros faire un buffer overflow


int main(void) {

    char b[4]="hey";

    printf("adresse de b %p\n",&b[0]);

    int a = 42;

    printf("adresse de a %p\n",&a);
    printf("valeur de a %i\n",a);

    b[5]=1;
    b[6]=1;

    printf("adresse de a modif %i\n",a);



    char *p = &b[0];
    p++;//avant de 1 octe car est de tyle char
    printf("adresse de p %p\n",p);
    printf("valeur pointé par p %c\n",*p);

    for (int i=0;i<8;i++) {
        printf("bit %i de *p -->%i\n",i,(*p >> i) & 1);
    }





    }







