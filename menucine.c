#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int a, b, edad;
    char nombre, tm;
    while (a!=9) {
        printf ("¿Qué es lo que deseas hacer? \n");
        printf("1.Membresias\n");
        printf("2. Boletos \n");
        printf("3.Dulceria \n");
        printf("4.Paqueteria \n");
        printf("5.Personal \n");
        printf("6.Promociones \n");
        printf("7.Estacionamiento \n");
        printf("8.Danos tu opinion para mejor nuestro servicio\n");
        scanf("%d", &a);

        if (a==1) {
            printf("Bienvenido a nuestras membresías\n");
            printf ("¿Cuentas con una de nuestras membresías?\n");
            printf("1.Sí\n");
            printf("2.Deseo adquirir una\n");
            scanf("%d",&b);
            switch (b) {
            case 1:
                printf("Esperamos que la estés disfrutando \n");
                break;
            case 2:
                printf("¿Cuál es tu nombre\n");
                fflush(stdin);
                gets(nombre);
                printf("¿Cuál es tu edad\n");
                scanf("%d", &edad);
                printf("¿Qué tipo de membresía deseas premium, gold o diamondblack? \n");
                fflush (stdin);
                scanf("%s",tm);
                printf("Nombre: %s", nombre);
                printf("Edad: %d", edad);
                printf("Membresía tipo: %s", tm);
            }
        }
        if (a==2) {}
        if (a==3) {}
        if (a==4) {}
        if (a==5) {}
        if (a==6) {}
        if (a==7) {}
        if (a==8) {}
    }
    return 0;
}
