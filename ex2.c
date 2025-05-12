#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int hit_priest = 40;
    float hit_add  = 0.15;
    int mana;

    printf("Ingrese el maná del enemigo: ");
    scanf("%d", &mana);

    if(mana >= 120 && mana <= 300){
        float total_hit = hit_priest + (hit_add * mana);
        if (total_hit > 80)
        {
            printf("CRITICAL HIT");
        }
        else{
            printf("NORMAL HIT");
        }
    }
    else{
        printf("No ingreso una cantidad de mana correcta.");
    }

    return 0;
}
