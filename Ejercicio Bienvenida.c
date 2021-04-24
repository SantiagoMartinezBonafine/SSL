#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int edad;
    char nombre [20];
    printf("%s", "ingrese su nombre:");
    scanf("%s",nombre);
    
    printf("%s","ingrese su edad:");
    scanf("%d",&edad);

    printf("Bienvenido, su nombre es: %s y su edad es: %d \n", nombre, edad);

    system("pause");
    return 0;
}