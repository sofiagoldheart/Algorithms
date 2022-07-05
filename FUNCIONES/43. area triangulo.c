#include <stdio.h>

float triangulo (float b, float h){
  float r;
  r=b*h/2;
  return r;
  }

int main() {
  float x, y;
  scanf ("%f",&x);
  scanf ("%f",&y);
  printf ("El area es: %.2f",triangulo(x,y));
  return 0;
}
  
//o

#include <stdio.h>

float triangulo (float b, float h){
  float r;
  r=b*h/2;
  return r;
  }

int main() {
  float a, x, y;
  scanf ("%f",&x);
  scanf ("%f",&y);
  a=triangulo(x,y);
  printf ("El area es: %.2f",a);
  return 0;
}
  
