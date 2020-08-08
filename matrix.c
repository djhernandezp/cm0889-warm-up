//Matriz Anti-Diagonal 
//Dairo Jose Hernandez Paez 
//Estudiante de segundo semestre del Doctorado en Ingenieria Matemática
//Universidad de EAFIT-Medellin 
//Materia: Analisis de Algoritmos
//Docente: Andres Sicard Ramirez

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAXDIM 1000


//double verif_entero(num);

int main (){
	
	int matriz[100][100], i, j, c, f;
	double pd, num, md[100][100];
	
	printf ("Ingrese el numero de columnas: ");
	scanf ("%lf",&num);
	
//	verif_entero(num);
	
	i = num;
	pd = num - i;
	
	if (pd > 0){
		printf ("El programa no reconoce valores decimales, ingrese numeros enteros");
		return 0;
	}
	
	if (i > 999999999 ){
		printf ("El dato ingresado supera el valor de un entero, digite un numero menor de 1000000000 ó Mil Millones");
		return 0;
	}
		

	printf ("Ingrese el numero de filas: ");
	scanf ("%lf",&num);
	
	j = num;
	pd = num - j;
	
	if (pd > 0){
		printf ("El programa no reconoce valores decimales, ingrese numeros enteros");
		return 0;
	}
	
	if (j > 999999999 ){
		printf ("El dato ingresado supera el valor de un entero, digite un numero menor de 1000000000 ó Mil Millones");
		return 0;
	}
	
	
	if (i==j && (i<=MAXDIM || j<=MAXDIM)){
		printf ("La matriz conrresponde a una matriz cuadrada: ");
		printf ("\n");
		printf ("la matriz cuadrada es de: %ix%i\n\n",i,j);
		
		printf ("digite los valores de la matriz: \n");
	
		for (c=0; c<i; c++){
			for (f=0; f<j; f++){
				printf ("digite el valor de la posicion [%i],[%i]: ",c,f);
				scanf ("%lf",&md[c][f]);
				
				matriz[c][f] = md[c][f];
				pd = md[c][f] - matriz[c][f];
				
				if (pd > 0){
					printf ("El programa no reconoce valores decimales, ingrese numeros enteros");
					return 0;
				}
				
				if (matriz[c][f] > 999999999 ){
					printf ("El dato ingresado supera el valor de un entero, digite un numero menor de 1000000000 ó Mil Millones");
					return 0;
				}
				
		    }
	    }
    
	    system ("pause");
	    printf ("\n\n\n");
    	
	    printf ("La matriz generada es: ");
	    
	    printf ("\n\n\n");
	    
		for (c=0; c<i; c++){
			for (f=0; f<j; f++){
				printf ("%i\t",matriz[c][f]);
			}
			printf ("\n");
		}
		
		system ("pause");
		printf ("\n\n\n");
		
		printf ("Luego, la anti-diagonal de la matriz es: ");
		
		printf ("\n\n\n");
		
		for (c=i-1, f=0; c>=0 && f<j; --c,++f){
			printf ("%i\t" , matriz[c][f]);
		}
		
		printf ("\n\n\nFin del Programa...");
		
	}
		
	else {
		printf ("La matriz no corresponde a una matriz cuadrada o su valor es 1001 o superior\n");
	}
	
	
//	system ("pause");
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
