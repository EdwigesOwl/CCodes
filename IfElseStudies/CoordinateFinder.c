#include <stdlib.h>
#include <stdio.h>

int main(){

    int cont, coor[5];

    cont = 0;

    for(cont = 0; cont < 2; cont++){
        printf("Choose a int number (start with X then Y): ");
        scanf("%d", &coor[cont]);
    }
    if (coor[0] < 0){
        if (coor[1] < 0){
            printf("The point is in the third quadrant.\n");
        }
        else{
            printf("The point is in the second quadrant.\n");
        }
    }
    else{
        if(coor[1] < 0){
            printf("The point is in the fourth quadrant.\n");
        }
        else{
            printf("The point is in the first.\n");
        }
    }

    printf("Press any key to leave...");
    getchar();
    getchar();
    return 0;
    
}