#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    int shocked = 0;
    int failed = 0;
    int result;
    int arrow[10];
    srand(time(NULL));
    int lenght = sizeof(arrow)/sizeof(arrow[0]);

    for (int i = 0; i < lenght ; i++)
    {
        int probability = rand() % 101;
        if (probability >=40)
        {
            result = 1;
            shocked++;
        }
        else{
            result = 0;
            failed++;
        }

        arrow[i] = result;
        printf("%d, ", arrow[i]);
    }

    printf("\nFlechas acertadas: %d\n", shocked);
    printf("Flechas falladas: %d\n", failed);
}