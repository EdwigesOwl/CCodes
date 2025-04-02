#include <stdlib.h>
#include <stdio.h>

int main(){

    int num[5], cont;
    cont == 0;

    for (cont = 0; cont < 3; cont++) {
        printf("Enter an int number: \n");    
        scanf("%d", &num[cont]);
    }
    if (num[0] < num[1]){
        if(num[1] < num[2]){
            printf("The bigger number is: %d\n", num[2]);
        }
        else{
            printf("The bigger number is: %d\n", num[1]);
        }
    }
    else{
        if(num[1] < num[3]){
            printf("The bigger number is: %d\n", num[2]);
        }
        else {
            printf("The bigger number is: %d\n", num[0]);
        }
    }

    printf("Press any key to leave...");
    getchar();
    getchar();
    return 0;

    
}