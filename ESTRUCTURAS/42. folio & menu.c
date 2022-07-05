#include <stdio.h>
#include <string.h>

struct datos_persona{
  char name[20];
  int age, folio;
  float weight;
};

struct datos_persona user[3];

int main (){
  int c=1, x, n, folio;
  for(int i=0;i<3;i++){
  printf("Ingrese el folio de la %d persona: ",c);       
  scanf("%d",&user[i].folio);  
  printf("Ingrese el nombre de la %d persona: ",c);
  scanf("%s",user[i].name);
  printf("Ingrese la edad de la %d persona: ",c);   
  scanf("%d",&user[i].age);
  printf("Ingrese la masa de la %d persona: ",c);
  scanf("%f",&user[i].weight);
  for(int j=0; j<i; j++){                    if(user[i].folio==user[j].folio){
    printf("Folio existente, ingrese uno nuevo: ");
    scanf("%d", &user[i].folio);
  }
    j=0;
  }
    c=c+1;
  }
  do{
  printf("Ingrese el folio del usuario que desea visualizar: ");
  scanf("%d",&n);
    for(int i=0; i<3; i++){
      if (user[i].folio==n){
  printf("Nombre de la persona: %s\n",user[i].name);
  printf("Edad de la persona: %d\n",user[i].age);
  printf("Peso de la persona: %f\n",user[i].weight);
    } else {
  printf("Folio no existente\n");
  break;
  }
  }    
  } while (x==1);
    return 0;
}
