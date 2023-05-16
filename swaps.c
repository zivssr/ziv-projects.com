#include <stdio.h>
int temp;
void Replaces(int *var1, int *var2)
{
    
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
    
    
} 
    

