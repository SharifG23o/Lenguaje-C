/*
Programa: circulo03.c
Descripción: Calcula el área y perímetro de un círculo
Autor: Julián Esteban Gutiérrez Posada
Estudiante: Sharif Giraldo Obando
Fecha: Enero de 2025
Recursos de información: https://www.youtube.com/watch?v=Fy8hwPbeqmg&list=PL2XSgRcVKqJCBRmR3xwC3ZFu0L5uEJO-h&index=4
*/

// Inclusión de bibliotecas

#include <stdio.h>
#include <math.h>

// Declaración de constantes

/*
Función principal
*/

int main()
{
    float a, b, c, x1, x2;

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);

    printf("Ingrese el valor de b: ");
    scanf("%f", &b);

    printf("Ingrese el valor de c: ");
    scanf("%f", &c);

    x1 = (-b + sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);
    x2 = (-b - sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);

    printf("Las soluciones son: %.2f y %.2f", x1, x2);

    return 0;
}