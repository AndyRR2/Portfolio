//Programador: Andy Rodriguez Rodriguez
//Cargar una matriz M de dimensiones 5x4 y un vector A de dimensi�n 4x1, con
//elementos aleatorios enteros positivos de 2 cifras. Visualizar la matriz y el vector
//originales.
//Multiplicar la matriz (por izquierda) con el vector . Visualizar el vector resultado.

#include "stdio.h"

int main()
{
   int i,j,a,b,M[5][4],A[4],B[5];//declarar variables
   
   srand(time(NULL));//genera aleatorio
   
  for(i=0;i<5;i++)//Genera elemento i de Matriz
  {
   	for(j=0;j<4;j++)//Genera elemento j de Matriz
   	{
     M[i][j]=10+rand()%90;//genera numero aleatorio para cada elemento de Matriz
	}
  }
  
  printf("Matriz M de 5X4:\n");
  for(i=0;i<5;i++)//Genera elemento i de Matriz
  {
   	for(j=0;j<4;j++)//Genera elemento j de Matriz
   	{	
     printf("%5d",M[i][j]);//Muestra en pantalla cada elemento de la Matriz 
	}
	printf("\n");//separa los elementos
  } 
  printf("\n\n\n");//separa la matriz del vector a continuacion
//--------------------------------------------------------------------------------------  
  for(a=0;a<4;a++)//Genera elemento a de Vector
  {
   A[a]=10+rand()%90;//Genera numero aleatorio para cada elemento del Vector	
  }
  
  printf("Vector A de 4X1:\n");
  for(a=0;a<4;a++)//Genera elemento a de Vector
  {
   printf("%5d",A[a]);//Muestra en pantalla cada elemento del Vector
   printf("\n");//separa los elementos
  }
  printf("\n\n\n");//separa al Vector de lo resultante al multiplicar a continuacion
  //////////////////////////////////////////////////////
  B[b]=0;
  for(i=0;i<5;i++)//Genera elemento i de Matriz
  {
   b=i;// el elemento b del vector resultante corresponde a la fila i de la Matriz
   	 for(j=0;j<4;j++)//Genera elemento j de Matriz
   	 {
      a=j;//el elemento a del Vector corresponde a la columna j de la Matriz
      B[b]=B[b]+M[i][j]*A[a];//Hace la multiplicacion de la Matriz y el vector segun el Algebra
     }
  }
  printf("Vector B de 5x1,  resultante de multiplicar matriz M de 5x4 por vector A de 4x1:\n");
  for(i=0;i<5;i++)//Genera elemento i de Matriz
  {
   b=i;
   	 for(j=0;j<4;j++)//Genera elemento j de Matriz
   	 {
      a=j;
     }
     printf("%5d",B[b]);//Muestra cada elemento del Vector resultante
    printf("\n");
  }
  return(0);//Fin	
}
