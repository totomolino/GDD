#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int posX;
    int posY;
}t_caballo;

t_caballo* iniciarCaballo(int seleccion);

void algoritmo(t_caballo* unCaballo, int** tablero);


int tableroCompleto(int tablero[8][8]);


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

    int tablero2[8][8] = {
    {1,1,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
    };
    
    int tablero3[8][8] = {
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1}
    };
/*
    printf("Eliga uno de los cuatro vertices (1- 0|0 , 2- 0|7 , 3- 7|7 , 4- 7|0 )");
    scanf("%d", &seleccion);

    t_caballo* unCaballo = iniciarCaballo(seleccion);

    algoritmo(unCaballo,tablero);
*/  
    
    printf("Tablero 1 : %d \n", tableroCompleto(tablero));
    printf("Tablero 2 : %d \n", tableroCompleto(tablero2));
    printf("Tablero 3 : %d \n", tableroCompleto(tablero3));
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