#include <stdio.h>
#include <string.h>

struct people_data{
  char name[20];
  int age;
  float weight;
};

struct people_data user[3];

int main (){
  int c1=1, c2=1;
  for(int i=0;i<3;i++){
  printf("Ingrese el nombre de la %d persona: ",c1);
  scanf("%s",user[i].name);
  printf("Ingrese la edad de la %d persona: ",c1);       
  scanf("%d",&user[i].age);
  printf("Ingrese la masa de la %d persona: ",c1);
  scanf("%f",&user[i].weight);
  c1++;
 }
  for(int i=0; i<3; i++){
  printf("Nombre de la %d persona: %s\n",c2,user[i].name);
  printf("Edad de la %d persona: %d\n",c2,user[i].age);
  printf("Peso de la %d persona: %f\n",c2,user[i].weight);
  c2++;
  }
    return 0;
}
