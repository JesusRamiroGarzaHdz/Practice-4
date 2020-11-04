//Encuentra el único elemento de un arreglo.
#include <stdio.h> 
  
int Unico(int arr[], int n) 
{ 
    int ones = 0, twos = 0; 
  
    int common_bit_mask; 
  
    for (int i = 0; i < n; i++) { 
     		 
        twos = twos | (ones & arr[i]); 
        
        ones = ones ^ arr[i]; 
        
        common_bit_mask = ~(ones & twos); 
        
        ones &= common_bit_mask; 
        
        twos &= common_bit_mask; 
  
    } 
  
    return ones; 
} 
  
int main() 
{ 
    int arr[] = { 10, 9, 10, 1, 10, 1, 1, 3, 3, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("El elemento unico  es: %d ", 
           Unico(arr, n)); 
    return 0; 
}
