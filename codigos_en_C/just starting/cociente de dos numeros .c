//Programador: Andy Rodriguez Rodriguez 
/*Calcular cociente de dos numeros*/
#include<stdio.h>
int main()
{
	float x,y; //declarar variable
	float cociente; //declarar variable
	printf("Ingresar numerador: "); //ingrese por teclado
	scanf("%d",&x); //guarda valor de x

	do
	{
		printf("ingrese denominador: "); //ingrese por teclado
	    scanf("%d",&y); //guarda valor de y
	    if(y==0)
	    {
		 printf("El cociente entre un denominador nulo no esta definido\n");
	    }
	       else
	       {
	        cociente=x/y; //calcula cociente
	       }
	}
	
	while(y==0);
	
	printf("El cociente es %f",cociente); //imprime por pantalla
	
    return (0);//final del programa
}
