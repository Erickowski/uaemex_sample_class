#include <stdio.h>

int main()
{
    int x = 5;
    int *p;
    printf("La direccion de i es %p y su valor es %i\n", &x, x);

    p = &x;
    printf("La direccion de *p es %p y su apunta a %p\n", &p, p);

    *p = 7;
    printf("El valor de x es %i\n", x);

    return 0;
}