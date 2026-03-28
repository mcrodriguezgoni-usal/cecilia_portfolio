/* ej 13 sumar 5 nros con un ciclo while
tn marzo 2026*/
#include <stdio.h>
#define CANT 20
int main(){
	//paso 1. solicitar la información - pedir los 5 nros
	int nro; //variable para leer los nros
	int suma=0; //variable para sumar
	int cont=0; //variable para contar las veces
	while (cont < CANT){
		printf("Ingrese un nro: ");
		scanf("%d", &nro);
		suma = suma + nro;
		cont++; //cont = cont + 1 cuento la vez que leo
	}
//	suma = suma + nro;	
	//paso 3. mostrar el resultado
	printf("El total es %d\n", suma);
}
