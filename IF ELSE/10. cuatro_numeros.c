#include <stdio.h>

main()
{   
    int a, b, c, d, y;

    printf("Ingresa 4 enteros (separar con espacios): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d){
      if (b<c && b<d){
        y = b;
      }
      else if (c<b && c<d){
        y = c;
      }
      else if (d<b && d<c){
        y = d;
      }

      printf("Mayor: %d\n", a);
      printf("Menor: %d", y);
    }
    else if (b>a && b>c && b>d) {
      if (a<c && a<d){
        y = a;
      }
      else if(c<a && c<d){
        y = c;
      }
      else if(d<a && d<c){
        y = d;
      }

      printf("Mayor: %d\n", b);
      printf("Menor: %d", y);
    }
    else if (c>a && c>b && c>d)
    {
      if (a<b && a<d){
        y = a;
      }
      else if(b<a && b<d){
        y = b;
      }
      else if(d<a && d<b){
        y = d;
      }

      printf("Mayor: %d\n", c);
      printf("Menor: %d", y);
    }
    else if (d>a && d>b && d>c) {
      if (a<b && a<c){
        y = a;
      }
    else if(b<a && b<c){
      y = b;
    }
    else if(c<a && c<b){
      y = c;
    }

    printf("Mayor: %d\n", d);
    printf("Menor: %d", y);
  }

  return 0; 
}
