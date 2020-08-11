//Matriz Anti-Diagonal
//Dairo Jose Hernandez Paez
//Estudiante de segundo semestre del Doctorado en Ingenieria Matemática
//Universidad de EAFIT-Medellin
//Materia: Analisis de Algoritmos
//Docente: Andres Sicard Ramirez

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "matrix.h"
#define MAXDIM 1000


//double verif_entero(num);

int main (){
	
	int i, j;
//	int matriz[100][100], i, j, c, f;
	double pd, num, md[100][100];
	
	printf ("Ingrese el numero de columnas: ");
	scanf ("%lf",&num);
	
//	verif_entero(num);
	
	i = num;
	pd = num - i;
	
	if (pd > 0){
		printf ("El programa no reconoce valores decimales, ingrese numeros enteros\n");
		system ("pause");
		return 0;
	}
	
	if (i > 999999999 ){
		printf ("El dato ingresado supera el valor de un entero, digite un numero menor de 1000000000 ó Mil Millones\n");
		system ("pause");
		return 0;
	}
	
	printf ("Ingrese el numero de filas: ");
	scanf ("%lf",&num);
	
	j = num;
	pd = num - j;
	
	if (pd > 0){
		printf ("El programa no reconoce valores decimales, ingrese numeros enteros\n");
		system ("pause");
		return 0;
	}
	
	if (j > 999999999 ){
		printf ("El dato ingresado supera el valor de un entero, digite un numero menor de 1000000000 ó Mil Millones\n");
		system ("pause");
		return 0;
	}
	
	if (i==j && (i<=MAXDIM || j<=MAXDIM)){
		printf ("La matriz conrresponde a una matriz cuadrada: ");
		printf ("\n");
		printf ("la matriz cuadrada es de: %ix%i\n\n",i,j);
	
		matrix(i,j);
	}
		
	else {
		printf ("La matriz no corresponde a una matriz cuadrada o su dimension es superior a 1000\n");
	}
	
	system ("pause");
	return 0;
}



//Posible uso de funciones (buscar error de retorno)


// verif_entero(num){
//	
//	int i = num;
//	double pd = num - i;
//	
//	if (pd > 0){
//		printf ("El programa no reconoce valores decimales, ingrese numeros enteros");
//		return 0;
//	}
//	
//	if (i > 999999999 ){
//		printf ("El dato ingresado supera el valor de un entero, digite un numero menor de 1000000000 ó Mil Millones");
//		return 0;
//	}
//	
//	return 0;
//}
