/*
Programa: salario.c
Descripción: Calcula el salario de un empleado
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
    int cantidadHoras;
    float valorHora, salarioPagar;

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &cantidadHoras);

    printf("Ingrese el valor de la hora trabajada: ");
    scanf("%f", &valorHora);

    salarioPagar = cantidadHoras * valorHora;

    printf("El salario a pagar al empleado es de: %.2f ", salarioPagar);

    return 0;
}