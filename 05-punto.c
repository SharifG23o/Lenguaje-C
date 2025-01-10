/*
Programa: 05-punto.c
Descripción: Programa que muestra la información de dos puntos en 2D
Autor: Julián Esteban Gutiérrez Posada
Estudiante: Sharif Giraldo Obando
Fecha: Enero de 2025
Recursos de información: https://www.youtube.com/watch?v=Fy8hwPbeqmg&list=PL2XSgRcVKqJCBRmR3xwC3ZFu0L5uEJO-h&index=4
*/

// Inclusión de bibliotecas

#include <stdio.h>

void imprimirPunto(char nombrePunto, float x, float y);

// Declaración de constantes

/*
Función principal
*/

int main()
{
    char nombrePunto1, nombrePunto2;
    float xPunto1, yPunto1, xPunto2, yPunto2;

    printf("Ingrese el primer nombre: ");
    scanf(" %c", &nombrePunto1);

    printf("Coordenada x de punto %c: ", nombrePunto1);
    scanf("%f", &xPunto1);

    printf("Coordenada y de punto %c: ", nombrePunto1);
    scanf("%f%*c", &yPunto1);

    printf("Ingrese el segundo nombre: ");
    scanf(" %c", &nombrePunto2);

    printf("Coordenada x de punto %c: ", nombrePunto2);
    scanf("%f", &xPunto2);

    printf("Coordenada y de punto %c: ", nombrePunto2);
    scanf("%f", &yPunto2);

    imprimirPunto(nombrePunto1, xPunto1, yPunto1);
    imprimirPunto(nombrePunto2, xPunto2, yPunto2);

    return 0;
}

/*
 *Procedimiento que imprime la información de un punto en 2d
 *param: nombre del punto(solamente una letra)
 *param: Coordenadas en x, y del punto en 2D
 */

void imprimirPunto(char nombrePunto, float x, float y){    
    printf("El punto %c ", nombrePunto);
    printf("está ubicado en las coordenadas {%.2f, %.2f}\n", x, y);
}