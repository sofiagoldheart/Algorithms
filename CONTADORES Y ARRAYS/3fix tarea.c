#include <stdio.h>
#include <string.h>
 
int main()
{
    char s1[10],s2[10];  
    int i,c=0;
 
    printf("Ingresa la primera cadena: ");
    gets(s1);
    printf("Ingresa la primera cadena: ");
    gets(s2);
    if(strlen(s1)==strlen(s2))
    {
    	for(i=0;s2[i]!='\0';i++)  
        {
        	if(s1[i]==s2[i])
        	 c++;
 	    }
 	    if(c==i)
          printf("Las cadenas son iguales");
        else
          printf("Las cadenas no son iguales");
    }
    else
     printf("Las cadenas no son iguales");
    return 0;
}
