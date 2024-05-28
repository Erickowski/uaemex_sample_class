#include <stdio.h>

int suma(int a, int b) {
  return a + b;
}

int main() {
  int x;
  x = suma(7, 5);

  printf("7 + 5 = %i\n", x);
  
  return 0;
}