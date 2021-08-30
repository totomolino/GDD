#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int posX;
    int posY;
}t_caballo;


int main(){

    int seleccion;

    int tablero[8][8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
    };
    

    printf("Eliga uno de los cuatro vertices (1- 0|0 , 2- 0|7 , 3- 7|7 , 4- 7|0 )");
    scanf("%d", &seleccion);

    t_caballo* unCaballo = iniciarCaballo(seleccion);

    algoritmo(unCaballo,tablero);


    return 0;



}

t_caballo* iniciarCaballo(int seleccion){
    int posX,posY;

    if(seleccion == 4){
        posX = 7;
        posY = 0;
    }
    else if(seleccion == 2){
        posX = 0;
        posY = 7;
    }
    else if(seleccion == 3){
        posX = 7;
        posY = 7;
    }
    else{
        posX = 0;
        posY = 0;
    }

    t_caballo* unCaballo = malloc(sizeof(t_caballo));

    unCaballo->posX = posX;
    unCaballo->posY = posY;

    return unCaballo;

}

void algoritmo(t_caballo* unCaballo, int** tablero){
    


}