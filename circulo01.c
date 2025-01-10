/*
Programa: circulo01.c
Descripción: Calcula el área y perímetro de un círculo
Autor: Julián Esteban Gutiérrez Posada
Estudiante: Sharif Giraldo Obando
Fecha: Enero de 2025
Recursos de información: https://www.youtube.com/watch?v=Fy8hwPbeqmg&list=PL2XSgRcVKqJCBRmR3xwC3ZFu0L5uEJO-h&index=4
*/

// Inclusión de bibliotecas

#include <stdio.h>

// Declaración de constantes
const float PI = 3.141592;

/*
Función principal
*/

int main()
{
    float radio, perimetro, area;

    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;
    perimetro = 2.0 * PI * radio;

    printf("El área del círculo es: %.2f \n", area);
    printf("El perímetro del círculo es: %.2f \n", perimetro);

    return 0;
}