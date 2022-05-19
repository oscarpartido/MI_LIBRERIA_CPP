/*autor: oscar vivaldi partido ramirez , 31/03/2022
libreria para funciones comunes de programas en c
 */
#ifndef _MILIBRERIA
#define _MILIBRERIA
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//prototipo
void leers(char *mensaje, char s[],int n);
float leerf(char *mensaje,float inferior, float superior);
int leerd(char *mensaje, int inferior, int superior);
int es_entero(char*cadena);
int es_decimal(char*cadena);
#include "milibreria.cpp"
#endif


