/*
Programa: 04-punto.c
Descripción: Programa que muestra la información de un punto en 2D
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
    char nombre;
    float x,y;

    printf("Ingrese el primer nombre: ");
    scanf(" %c", &nombre);    

    printf("Coordenada en x de punto %c: ",nombre);
    scanf("%f", &x);

    printf("Coordenada en y de punto %c: ",nombre);
    scanf("%f", &y);

    imprimirPunto(nombre, x, y);  

    return 0;
}

/*
 *Procedimiento que imprime la información de un punto en 2d
 *param: nombre del punto(solamente una letra)
 *param: Coordenadas en x, y del punto en 2D
 */

void imprimirPunto(char nombrePunto, float x, float y){    

    printf("El punto %c ", nombrePunto);
    printf("está ubicado en las coordenadas {%.2f, %.2f}", x, y);
}