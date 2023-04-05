//Programador: Andy Rodriguez Rodriguez
//Dado un arreglo V de orden N, presentar por pantalla la cantidad de elementos
//que sean n�meros primos.
#include<stdio.h>
#include <stdlib.h>
int main()
{
 int N,C,X,i,DIV,CUENTA=0,V[i];//Declaro variables
 printf("Ingresa el orden del vector:\n");
 scanf("%d",&N);//entra el orden del vector

printf("Ingrese los elementos del Vector:\n");

for(i=0;i<N;i++)//Cargar Matriz
{
  scanf("%d",&V[i]);//entra cada elemento de la matriz
  X=V[i];//asigna en variable X al elemento correspondiente
  C=0;//Da valor cero a C, determinara si es primo o no
  
  if(X==0||X==1||X==4)//para 0, 1, 4 son casos especiales, no sera primo
  {
   C=1;// si C vale 1 no es primo
  } 
  else
  {
  	for(DIV=2;DIV<X;DIV++) //aumenta en 1 el divisor mientras sea menor que el numero entrado
   {
     if(X%DIV==0)//si el resto de la division del numero y el divisor es cero, no es primo
	 {	
	 C=1;
	 }	 
   }   
  }
   if(C==0)//si hasta aqui el valor de C nunca se convirtio en 1, significa que 
   //el resto de todas las diviciones hechas nunca fue 0 por lo que es primo
   {
   	CUENTA=CUENTA+1;//va contado en 1 cada vez que aparezca un primo
   }   
}
 
printf("La cantidad de elementos primos del vector es %d:\n",CUENTA);

return(0);//fin	
}
