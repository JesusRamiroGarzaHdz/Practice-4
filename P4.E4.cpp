//Ejercicio 4 - Generador de secuencias de Grey Code

#include <stdio.h>
int decimalToBinaryNumber(int x, int n);    
int generateGrayarr(int n);                 


int main(){
	int n;
	printf("Generar secuencia en Grey Code del siguiente numero: \n");
	scanf("%d", &n);
    generateGrayarr(n);
}

int decimalToBinaryNumber(int x, int n) 
{ 
    int* binaryNumber = new int(x);                     
    int i = 0; 
    while (x > 0) {  
	                    
        binaryNumber[i] = x % 2;                         
	 
        x = x / 2;                                       
        i++;                                             
    } 
  
    for (int j = 0; j < n - i; j++){                    
        printf("0");
	}
  
    for (int j = i - 1; j >= 0; j--){                    
        printf("%d", binaryNumber[j]);                  
	}
        
} 
  
 
int generateGrayarr(int n) 
{ 
    int N = 1 << n;                         
    for (int i = 0; i < N; i++) {           
  
        int x = i ^ (i >> 1);               
		//printf("x = %d\n",x);               
  
        
        decimalToBinaryNumber(x, n);       
  
        printf("\n");
    } 
}
