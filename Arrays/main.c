#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

float calcularPromedio(int,int,int);
int cargarAlumnos(char[][50], int[],int[],int[],float[], int);
int mostrarAlumnos(char[][50], int[],int[],int[],float[], int);
int main()
{
    char nombreCompleto[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    int i;

    cargarAlumnos(nombreCompleto,nota1,nota2,nota3, promedio, T);
    mostrarAlumnos(nombreCompleto,nota1,nota2,nota3, promedio, T);



    return 0;
}


float calcularPromedio(int nota1, int nota2, int nota3)
{
    float promedio;

    promedio = (float)(nota1 + nota2 + nota3)/3;
    return promedio;
}

int cargarAlumnos(char nombre[][50], int nota1[],int nota2[],int nota3[],float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombre[i]);
        printf("Ingrese la nota 1: ");
        scanf("%d", &nota1[i]);
        printf("Ingrese la nota 2: ");
        scanf("%d", &nota2[i]);
        printf("Ingrese la nota 3: ");
        scanf("%d", &nota3[i]);

        promedio[i] = calcularPromedio(nota1[i], nota2[i], nota3[i]);

    }


    return 0;
}

int mostrarAlumnos(char nombre[][50], int nota1[],int nota2[],int nota3[],float promedio[], int tam)
{
    int i;
    printf("%20s %6s %6s %6s %8s\n", "Nombre", "Nota 1", "Nota 2", "Nota 3", "Promedio" );
    for(i=0; i<T; i++)
    {
        printf("%20s %6d %6d %6d %.2f\n", nombre[i], nota1[i], nota2[i]
               , nota3[i], promedio[i]);
    }
    return 0;
}
