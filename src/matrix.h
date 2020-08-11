//Contenido del Archivo gen_matriz.h
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


int matrix(int i,int j){
	
	int matriz[100][100], c, f;
	double pd, num, md[100][100];
	
	printf ("digite los valores de la matriz: \n");
	
	for (c=0; c<i; c++){
		for (f=0; f<j; f++){
			printf ("digite el valor de la posicion [%i],[%i]: ",c,f);
			scanf ("%lf",&md[c][f]);
			
			matriz[c][f] = md[c][f];
			pd = md[c][f] - matriz[c][f];
				
			if (pd > 0){
				printf ("El programa no reconoce valores decimales, ingrese numeros enteros\n");
				return 0;
			}
				
			if (matriz[c][f] > 999999999 ){
				printf ("El dato ingresado supera el valor de un entero, digite un numero menor de 1000000000 ó Mil Millones\n");
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
		
	printf ("Luego, la diagonal de la matriz es: ");
		
	printf ("\n\n\n");
		
	for (c=0, f=0; c<i && f==c; c++,f++){
		printf ("%i\t" , matriz[c][f]);
	}
		
	printf ("\n");
	system ("pause");
	printf ("\n\n\n");
		
	printf ("Luego, la anti-diagonal de la matriz es: ");
		
	printf ("\n\n\n");
		
	for (c=i-1, f=0; c>=0 && f<j; --c,++f){
		printf ("%i\t" , matriz[c][f]);
	}
		
	printf ("\n\n\nFin del Programa...");
	
	return 0;
}
