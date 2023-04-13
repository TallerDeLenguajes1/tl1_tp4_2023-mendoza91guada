#include <stdio.h>
#include <stdlib.h>

typedef struct Tarea {
    int tareaId;
    char *descripcion;
    int duracion;
} Tarea;


int main() {

int cantidad;
Tarea **ListaDeTareas;

printf("Ingrese la cantidad de tareas que desea agregar\n");
scanf("%d", &cantidad);
ListaDeTareas = (Tarea**)malloc(sizeof(Tarea*)*cantidad);
}