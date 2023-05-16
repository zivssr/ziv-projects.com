#include <stdio.h>
int Flip_Func(int num)
{
    int new_num = 0;
    while (num != 0)
    {
        new_num *= 10;
        new_num = new_num + num % 10;
        num /= 10;
    }
    return new_num;
    
}

int main()
{
    int num1;
    num1 = Flip_Func(-1978874);
    printf("the result is: %d",  num1); 
    return 0;
}
