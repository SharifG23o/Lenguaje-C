/*
Programa: 02-saludo.c
Descripción: Programa que un saludo a una persona
Autor: Julián Esteban Gutiérrez Posada
Estudiante: Sharif Giraldo Obando
Fecha: Enero de 2025
Recursos de información: https://www.youtube.com/watch?v=Fy8hwPbeqmg&list=PL2XSgRcVKqJCBRmR3xwC3ZFu0L5uEJO-h&index=4
*/

// Inclusión de bibliotecas

#include <stdio.h>

// Declaración de constantes

/*
Función principal
*/

void imprimirSaludo(char nombre[]);

int main()
{
    char nombre1[30], nombre2[30];

    printf("Ingrese el primer nombre: ");
    fgets(nombre1, sizeof(nombre1), stdin);

    printf("Ingrese el segundo nombre: ");
    fgets(nombre1, sizeof(nombre2), stdin);

    imprimirSaludo(nombre1);
    imprimirSaludo(nombre2);

    return 0;
}

/*
 *Procedimiento que imprime un saludo a una persona
 *param: nombre de la persona a saludar
 */

void imprimirSaludo(char nombre[])
{

    printf("Hola %s ", nombre);
}
