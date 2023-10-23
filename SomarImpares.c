/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int soma;
    for(int i = 1; i<=100; i+=2)
        soma = soma + i;
    
    printf("%d", soma);
    return 0;
}
