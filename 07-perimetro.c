/*
Programa: 07-perimetro.c
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
float calcularPerimetro(float xP1, float yP1, float xP2, float yP2, float xP3, float yP3);

// Declaración de constantes

/*
Función principal
*/

int main()
{
    float xPunto1, yPunto1, xPunto2, yPunto2, xPunto3, yPunto3, perimetro;

    printf("Coordenada en x del primer punto: ");
    scanf("%f", &xPunto1);

    printf("Coordenada y del primer punto: ");
    scanf("%f", &yPunto1);

    printf("Coordenada x del segundo punto: ");
    scanf("%f", &xPunto2);

    printf("Coordenada en y del segundo punto: ");
    scanf("%f", &yPunto2);

    printf("Coordenada x del tercer punto: ");
    scanf("%f", &xPunto3);

    printf("Coordenada en y del tercer punto: ");
    scanf("%f", &yPunto3);

    perimetro = calcularPerimetro(xPunto1, yPunto1, xPunto2, yPunto2, xPunto3, yPunto3);
    printf("El perímetro del triángulo es de %.2f ", perimetro);

    return 0;
}

/*
 *Funcion que calcula la distancia entre dos puntos en 2d
 *param: Coordenadas en x, y de ambos puntos en 2D
 *return: distancia entre ambos puntos
 */

float calcularDistancia(float x1, float y1, float x2, float y2){
    float distancia;
    distancia = sqrt(pow(x2-x1, 2.0) + pow(y2-y1, 2.0));
    return distancia;
}

/*
*Función que calcula el perímetro de un triángulo
*param: cordenadas x, y de los tres puntos del triángulo
*return:perímetro del triángulo
*/

float calcularPerimetro(float xP1, float yP1, float xP2, float yP2, float xP3, float yP3){
    float distanciaP1P2, distanciaP2P3, distanciaP3P1, perimetro;

    distanciaP1P2 = calcularDistancia(xP1, yP1, xP2, yP2);
    distanciaP2P3 = calcularDistancia(xP2, yP2, xP3, yP3);
    distanciaP3P1 = calcularDistancia(xP3, yP3, xP1, yP1);

    perimetro = distanciaP1P2 + distanciaP2P3 + distanciaP3P1;

    return perimetro;
}