// Calcule el cuadrado de un número sin utilizar ningún operador numérico.

#include <stdio.h>

int main() {
		int temp, num;
		int cuadrado = 0;
		int cuenta = 0;
    printf("Ingresa el numero para elevar al cuadrado: \n");
    scanf("%d", &num);   
	temp = num;                                                                
		while(temp > 0)                                                            
	{
	    if(temp & 1)                                                           
	    {                                                                      
	        cuadrado += num << cuenta;
	    }
	    temp = temp >> 1;                                                                      
	    cuenta++;                                                                           
	}                                                                        
	printf("El cuadrado de %d es: %d\n", num, cuadrado );
}
