#include <stdio.h>
#include <math.h>

int i, my_pow_value, result = 1;
float My_Pow(int n);

float My_Pow(int n)
{
    
    int BASE = 10;
    if (n < 0)
    {
        return ((float) 1 / My_Pow(-n));
    }
    else
    {
	    for(i = 0; i < n; i++)
		result *= BASE;
    }
    
        return My_Pow(n);
    }   
}


int main()
{
    float num;
    num = My_Pow(-6);
    puts("the result is: %.10f\n", num ); 
    return 0;
}


