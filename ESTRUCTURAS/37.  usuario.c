#include <stdio.h>

struct data{
  char name[15];
  int age;
  float weight;
};

struct data user;

int main (){
  user.name;
  user.age;
  user.weight;
  
  printf("Ingrese su nombre: ");
  scanf("%s",user.name);
  printf("Ingrese su edad: ");                
  scanf("%d",&user.age);
  printf("Ingrese su masa: ");
  scanf("%f",&user.weight);
  }
