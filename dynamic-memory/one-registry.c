#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  typedef struct
  {
    char nombre[20];
    int edad;
  } Data;

  Data *p_data; // Declaracion de un apuntador a Data

  // Un registro en memoria dinamica
  p_data = (Data*) malloc(sizeof(Data));
  if (p_data != NULL) {
    // Asignamos valores iniciales
    strcpy(p_data->nombre, "Rachel");
    p_data->edad = 21;

    // Imprimimos valores
    printf("Nombre: %s, Edad: %d\n", p_data[0].nombre, p_data[0].edad);
    // Nombre: Rachel, Edad: 21

    free(p_data); // Liberar memoria dinamica
  }

  return 0;
}