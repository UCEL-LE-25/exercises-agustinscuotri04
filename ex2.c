#include <stdio.h>
#include <string.h>

#define PRINTERS 4
#define SECTORS 3

typedef struct {
    int pages;
    int status;
}Printer;

typedef struct{
    char name[20];
    Printer printers[PRINTERS];
}Sector;


int main(){
    Sector sectors[SECTORS] = {
        {"ADMINISTRACIÓN"}, 
        {"TÉCNICAS"},
        {"RECURSOS HUMANOS"}
    };
    
    for (int i = 0; i < 3; i++)
    {
       printf("SECT0R %s \n", sectors[i].name);
       for (int j = 0; j < 4; j++)
       {
        do{
            printf("Impresora %d -> ESTADO: 1- Activa // 0- Inactiva \n", j+1);
            scanf("%d", &sectors[i].printers[j].status);
            if(sectors[i].printers[j].status != 0 && sectors[i].printers[j].status != 1){
                printf("Estado inválido. Solo admite 0 o 1.\n");
            }
        }while(sectors[i].printers[j].status != 0 && sectors[i].printers[j].status != 1);

        do{
            printf("Impresora %d -> Páginas impresas: \n", j+1);
            scanf("%d", &sectors[i].printers[j].pages);
            if(sectors[i].printers[j].pages < 0){
                printf("La cantidad de páginas no puede ser negativa. Intente nuevamente.\n");
            }
        }while(sectors[i].printers[j].pages < 0);

        printf("Impresora %d -> Páginas impresas: \n", j+1);
        scanf("%d", &sectors[i].printers[j].pages);
       }
    }
    int sectorMax;
    int maxPages = 0;

    for (int i = 0; i < 3; i++)
    {
        int totalPages = 0;
        int active = 0;
        for (int j = 0; j < 4; j++)
        {
            totalPages += sectors[i].printers[j].pages;
            if(sectors[i].printers[j].status == 1){
                active++;
            }
        }

        printf("Sector %s\n", sectors[i].name);
        printf("Paginas impresas: %d\n", totalPages);
        printf("Impresoras activas: %d\n", active);

        if(maxPages < totalPages){

            maxPages = totalPages;
            sectorMax = i;
        }
    }

    printf("El sector que más páginas impresas tiene es: %s\n", sectors[sectorMax].name);
    printf("Total de páginas impresas: %d\n", maxPages);    

    return 0;
}
