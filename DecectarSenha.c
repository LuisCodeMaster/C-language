
#include <stdio.h>

int main()
{
    int senha;
    do
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        printf("Senha Inválida\n");
    }
        while(senha != 123456);
        printf("Acesso permitido\n");
    return 0;
}
