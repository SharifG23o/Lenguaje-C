/*
Programa: demo03.c
Descripción: Programa que lee e imprime un número entero en diferentes formatos
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
    int a,b;

    printf("Ingrese un valor entero: ");
    scanf("%4d", &a);

    printf("Ingrese un valor entero: ");
    scanf("%d", &b);

    printf("El %10d es el valor ingresado. \n", a);
    printf("El %-10d es el valor ingresado. \n",a);

    printf("El %010d es el valor ingresado. \n", b);

    return 0;




    

    return 0;
}