 /* ej 7 if else mayor, menor, igual a 100 
versión mejorada : 	con uso de macro para el 100
					con menos llaves (sólo las necesarias)
intro 2026 marzo 
*/
#include <stdio.h>
#define MAX 3241
int main(){
	
	//paso 1. leer una variable
	int x;
	printf("Ingrese un nro: ");
	scanf("%d", &x);
	 
	//paso 2. determinar si es mayor, menor o igual
	if (x>MAX) printf("El nro ingresado es mayor a %d\n", MAX);
	else 	if(x<MAX) printf("El nro ingresado es menor a %d\n", MAX);
			else printf("El nro ingresado es igual a %d\n", MAX);
		
	return 0;
}
