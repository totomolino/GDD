#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <list.h>

typedef struct{
    int posX;
    int posY;
}t_pos;

t_pos* iniciarCaballo(int seleccion);

void algoritmo(t_pos* unCaballo, int** tablero);


int tableroCompleto(int tablero[8][8]);

void mostrarTablero(int tablero[8][8]);

void marcarTablero(int posX, int posY, int tablero[8][8]);


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

    mostrarTablero(tablero);

    printf("Eliga uno de los cuatro vertices (1- 0|0 , 2- 0|7 , 3- 7|7 , 4- 7|0 )");
    scanf("%d", &seleccion);

    t_pos* posCaballo = iniciarCaballo(seleccion);

    marcarTablero(posCaballo->posX,posCaballo->posY, tablero);

    mostrarTablero(tablero);

    //algoritmo(unCaballo,tablero);




    return 0;



}

t_pos* iniciarCaballo(int seleccion){
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

    t_pos* posCaballo = malloc(sizeof(t_pos));

    posCaballo->posX = posX;
    posCaballo->posY = posY;



    return posCaballo;

}

void algoritmo(t_pos* posCaballo, int** tablero){

    t_pos* sigPos = nextMove(posCaballo, tablero);


}


int tableroCompleto(int tablero[8][8]){
    
    for(int i = 0 ; i < 8 ; i++){

        for(int u = 0; u < 8 ; u++){
            if(tablero[i][u] == 0){ //Si alguno es 0, retorno 0.
                return 0;
            }// si no entra en el if, sigue de largo y devuelve true(1)
        }


    }

    return 1;

}

void mostrarTablero(int tablero[8][8]){
    printf("TABLERO: \n");
    for(int i = 0 ; i < 8 ; i++){

        for(int u = 0; u < 8 ; u++){
            printf(" %d ",tablero[i][u]);
        }
        printf("\n");

    }

}

void marcarTablero(int posX, int posY, int tablero[8][8]){

    tablero[posX][posY] = 1;

}

t_pos* nextMove(t_pos* posCaballo, int tablero [8][8]){



}