/*
 ============================================================================
 Name        : 1A.c
 Author      : marcos cabrera
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
}eVacuna;

#define TAM 10

float aplicarAumento(float precio);
char reemplazarCaracteres (char cadena [] ,char a, char b, int tam);

int main(void) {

	setbuf(stdout, NULL);
	float precio = 2;

	aplicarAumento(precio);

	return EXIT_SUCCESS;
}

float aplicarAumento(float precio){
	float aumento;

	aumento = (100 / 5) * precio;
	precio = precio + aumento;

	return printf("Valor original: %0.2f", precio);
}

char reemplazarCaracteres (char cadena [] ,char a, char b, int tam){
	int todoOk = 0;

	return todoOk;
}

