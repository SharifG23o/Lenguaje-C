/*
Programa: demo02.c
Descripción: Programa que lee e imprime un número real en diferentes formatos
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

int main()
{
    float a;

    printf("Ingrese un valor real: ");
    scanf("%f", &a);

    printf("El %f es el valor ingresado. \n", a);
    printf("El %.2f es el valor ingresado. \n", a);
    printf("El %8.2f es el valor ingresado. \n", a);

    return 0;
}