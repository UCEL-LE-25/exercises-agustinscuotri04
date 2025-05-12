#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int tables;
    int nails;
    int ropes;
    int tableCost;
    int nailCost;
    int ropeCost;
} Material;

int main(){
    srand(time(NULL));
    int gold = rand() %  201 + 100;
    int option, traps;
    Material material = {0, 0, 0, 50, 10, 75}; 
    while (true)
    {
        printf("**LISTA DE MATERIALES**\n");
        printf("1. Tabla -> $50\n");
        printf("2. Clavo -> $10\n");
        printf("3. Soga -> $75\n");
        printf("4. Salir.\n");
        printf("Oro: $%d\n", gold);
        printf("Opción: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1 :
            if(gold < material.tableCost)
            {
                printf("Oro insuficiente.\n");
            }
            else
            {
                gold -= material.tableCost;
                material.tables++;
                printf("Material adiquirido correctamente.\n");
            }
            break;
        case 2: 
            if(gold < material.nailCost)
            {
                printf("Oro insuficiente.\n");
            }
            else
            {
                gold -= material.nailCost;
                material.nails++;
                printf("Material adquirido correctamente.\n");
            }
            break;
        case 3:
            if (gold < material.ropeCost)
            {
                printf("Oro insuficiente.\n");
            }
            else
            {
                gold -= material.ropeCost;
                material.ropes++;
                printf("Material adquirido correctamente.\n");
            }
            break;
        case 4:
            printf("Saliendo...\n");
            goto showInventory;
        default:
            printf("No ingreso una opción correcta.\n");
            break;
        }

    }
    showInventory:
        printf("**INVENTARIO**\n");
        printf("Tablas: x%d\n", material.tables);
        printf("Clavos: x%d\n", material.nails);
        printf("Sogas: x%d\n" , material.ropes);
        printf("Oro: $%d\n" , gold);
        
        if (material.ropes == 1 && material.nails == 4 && material.tables == 2)
        {
            printf("\nENTER para fabricar trampa.");
            getchar();
            getchar();
            traps++;
            printf("Trampa fabricada!!\n");
        }
        else
        {
            printf("Materiales insuficientes para fabricar una trampa.\n");
        }
        return 0;
}