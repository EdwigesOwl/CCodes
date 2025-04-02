#include <stdlib.h>
#include <stdio.h>

int main(){

    int num1, num2;

        printf("Escolha um numero: ");
        scanf ("%d", &num1);
    
        printf("Escolha outro numero: ");
        scanf("%d", &num2);

    if (num1 == num2){
        printf("Os numeros sao iguais.\n");
    }
    else{
        printf("Os numeros sao diferentes.\n");
    }

    printf("Pressione qualquer tecla para sair...\n");
    getchar();
    getchar();
    return 0;

}