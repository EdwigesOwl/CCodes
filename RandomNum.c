#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    int min = 1, max = 100, chnum;

    srand(time(NULL));
    int randomNum = (rand() % (max - min + 1)) + min;

    printf("Escolha um numero: ");
        scanf("%d", &chnum);


    if(chnum == randomNum){
        printf("\nVoce acertou!!!\n");
    }
    else{
        printf("Voce errou :(\n");
        printf("O numero era: %d\n", randomNum);
    }
    system("Pause");
}