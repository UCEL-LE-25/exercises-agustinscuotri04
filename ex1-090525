#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int vida = rand() % 101; 
    int escudo = rand() % 26;
    bool tienePocion = true;
    int pocion = rand() % 2;


    if(vida == 100 && escudo > 0){
        printf("Jugador con vida y escudo.\n");
    }
    else if(vida > 0 && vida < 100 && tienePocion){
        printf("Jugador herido pero con posibilidad de curarse.\n");
    }
    else if(vida == 0){
        printf("Jugador muerto.\n");
    }
    else{
        printf("Estado desconocido");
    }

    if(pocion == 1){
        tienePocion = false;
    }

    return 0;
}

// le hago que la vida  sea un random entre 0 y 100 cada vez que se ejecute. (lineas 6 y 7).
// que el escudo tambien sea un random pero entre 0 y 25. (linea 8).
// le agrego el #include de la linea 2 para que funcione correctamente el bool.
// le agregue otro random entre 0 y 1 para ir cambiando el bool. (linea 10).
// le agregue la validación para ir cambiando el bool. (linea 26).
// le agregue el #include de la linea 4 para que funcione los randoms de vida, escudo y pocion.
// y corrijo las validaciones respectivamente para que tenga lógica según lo que ocurra.
