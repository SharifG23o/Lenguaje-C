/*
Programa: 06-distancia.c
Descripción: Programa que calcula la distancia entre dos puntos
Autor: Julián Esteban Gutiérrez Posada
Estudiante: Sharif Giraldo Obando
Fecha: Enero de 2025
Recursos de información: https://www.youtube.com/watch?v=Fy8hwPbeqmg&list=PL2XSgRcVKqJCBRmR3xwC3ZFu0L5uEJO-h&index=4
*/

// Inclusión de bibliotecas

#include <stdio.h>
#include <math.h>


float calcularDistancia(float x1, float y1, float x2, float y2);

// Declaración de constantes

/*
Función principal
*/

int main()
{
    
    float xPunto1, yPunto1, xPunto2, yPunto2, distancia;

    printf("Coordenada en x del primer punto: ");
    scanf(" %f", &xPunto1);

    printf("Coordenada y del primer punto: ");
    scanf("%f", &yPunto1);

    printf("Coordenada x del segundo punto: ");
    scanf("%f%*c", &xPunto2);

    printf("Coordenada en y del segundo punto: ");
    scanf(" %f", &yPunto2);

    

   distancia=calcularDistancia(xPunto1,yPunto1,xPunto2,yPunto2);
   printf("La distancia entre los dos puntos es de %.2f", distancia);

    return 0;
}

/*
 *Funcion que calcula la distancia entre dos puntos en 2d
 *param: Coordenadas en x, y de ambos puntos en 2D
 *return: distancia entre ambos puntos
 */

float calcularDistancia(float x1, float y1, float x2, float y2){

    float distancia;

    distancia= sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));

    return distancia;
}