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
  int i;

  // 10 registros con memoria dinamica
  p_data = (Data*) malloc(sizeof(Data)*10);
  if (p_data != NULL) {
    // Inicializacion de datos del arreglo
    for (i = 0; i < 10; i++) {
      strcpy(p_data[i].nombre, "Rachel");
      p_data[i].edad = 21;
    }

    // Lectura de datos del arreglo
    for (i = 0; i < 10; i++) {
      printf("Nombre: %s, Edad: %d\n", p_data[i].nombre, p_data[i].edad);
      // Nombre: Rachel, Edad: 21 * 10
    }

    free(p_data); // Liberar memoria dinamica
  }

  return 0;
}