// Multiplicaciones y divisiones

#include<stdio.h>
	#include<stdlib.h>
	
	int main (){
	
	unsigned int A;
	unsigned int B;
	unsigned int m, d;
	
	printf ("Introduzca el valor de A: ");
	scanf("%d",&A);
	printf("Introduzca el valor de B: ");
	scanf("%d", &B);
	
	m = A << (B/2);
	d= A >> (B/2);
	
	printf("Resulado de la multiplicacion = %d\n" , m);
	printf("Resultado de la division = %d\n", d);
	
	}
