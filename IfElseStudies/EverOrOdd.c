#include <stdlib.h>
#include <stdio.h>

int main(){

    int num;

    printf("Insert a number: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("The number is even.\n");
    }
    else{
        printf("The number is odd.\n");
    }

    printf("Press any key to leave...\n");
    getchar();
    getchar();
    return 0;
}