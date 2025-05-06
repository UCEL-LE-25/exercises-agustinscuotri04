#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    float finalGrade;
};

void addStudent(struct Student *list, int *amount);
void showStudents(struct Student *list, int amount);
void calculateAverage(struct Student *list, int amount);


int main(){
   struct Student list[100];
    int amount = 0;
    int option;

    do{
        printf("\n--- MENÚ ---\n");
        printf("1. Agregar nuevos estudiantes\n");
        printf("2. Mostrar todos los registrados\n");
        printf("3. Calcular el promedio de notas\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            addStudent(list, &amount);
            break;
        case 2:
            showStudents(list, amount);
            break;
        case 3:
            calculateAverage(list, amount);
            break;
        case 4: 
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción inválida. Intente de nuevo.\n");
        }
    }while (option != 4);

    return 0;
}

void addStudent(struct Student *list, int *amount){
    printf("\n Cantidad de estudiantes a ingresar: ");
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\n Estudiante %d: \n", *amount + 1);
        printf("Nombre: ");
        getchar();
        fgets(list[*amount].name, 50, stdin);
        list[*amount].name[strcspn(list[*amount].name, "\n")] = 0;

        printf("Edad: ");
        scanf("%d", &list[*amount].age);

        printf("Nota final: ");
        scanf("%f", &list[*amount].finalGrade);
        getchar();

        (*amount)++;


    }
}

void showStudents(struct Student *list, int amount)
{
    if(amount == 0){
        printf("\n No hay estudiantes registrados.");
        return;
    }

    printf("\n Lista de estudiantes.\n");
    for(int i = 0; i < amount; i++){
        printf("%d.%s - Edad: %d - Nota final: %.2f \n",  i + 1, list[i].name, list[i].age, list[i].finalGrade);
    }
}

void calculateAverage(struct Student *list, int amount){
    if (amount == 0){
        printf("No hay estudiantes para calcular el promedio.\n");
        return;
    }

    float sum = 0;
    for(int i = 0; i < amount; i++){
        sum += list[i].finalGrade;
    }

    printf("Promedio de notas: %.2f \n", sum / amount);
}
