/*
Programa: velocidad03.c
Descripción: Calcula la velocidad de desplazamiento de un estudiante
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
    float velocidad, distancia, tiempo;

    printf("Ingrese la distancia en metros: ");
    scanf("%f", &distancia);

    printf("Ingrese el tiempo en segundos: ");
    scanf("%f", &tiempo);

    velocidad = distancia / tiempo;

    printf("La velocidad es de %.2f metros/segundo", velocidad);

    return 0;
}