//Programador: Andy Rodriguez Rodriguez 
//Ingresar un n�mero entero positivo de 2 o m�s d�gitos (realizar el control
//mediante una funci�n). Determinar (utilizando otra funci�n que reciba el n�mero
//ingresado) la suma de los d�gitos del n�mero que sean impares. Presentar por
//pantalla el resultado.

#include<stdio.h>
	float F1NumeroEntero(float X);//declaro funciones
	float F2ContarImpares(float X);
float main()//funcion principal
{
 float X,XF,RESTO,SUMA; //declarar variable

printf("Entre un Numero entero positivo de 2 o mas digitos:");
scanf("%f",&X);//guarda el numero entrado como float(tal que pueda tener una coma)

if(X<10)//filtra solo numeros positivo de 2 o mas digitos
{
 printf("El numero entrado no es positivo de 2 o mas digitos\n");
}
else
 {
  XF=F1NumeroEntero(X);	//hace funci�n F1NumeroEntero
  if(XF==0)//hace solo si la funci�n F1NumeroEntero es igual a cero
  {
  SUMA=F2ContarImpares(X); //hace funci�n F2ContarImpares
  printf("La suma de los digitos impares es %f",SUMA);
  }
   else
   {
   printf("El numero entrado no es entero\n");	
   }
 }	

return(0);//fin
}
//-----------------------------------------------------------------------------------------------------------------------------------
//Funciones
//funcion F1NumeroEntero 
//(esta funci�n toma al numero entrado y mediante calculos matematicos 
//analiza el primer numero despues de la coma, el numero sera entero solo si ese numero es cero)
float F1NumeroEntero(float X)
{
	float X1,XF;//declarar variables de la funcion
	int X2;
	
	X1=X*10;
	X2=(X1/10);
	X2=X2*10;
	XF=X1-X2;
	return(XF);//regresa el valor del numero despues de la coma para analizarlo luego con un if.	
}
//-----------------------------------------------------------------------------------------------------------------------------------
//funcion F2ContarImpares
//(esta funcion toma el numero entrado y mediante calculos matematicos va analizando cada digito desde derecha aizquierda
//viendo si es par o impar, cuando analiza ese digito entonces corta al numero por ese numero para seguir analizando el siguiente
float F2ContarImpares(float X)
{
float X1,X2,SUMA=0,XF,RESTO;//declarar variables de la funcion
int a,b;

a=X;//guarda el numero entrado como variable float en una variable int convirtiendolo en entero

do//hace mientras (a) distindto de 0, si (a es cero no hay mas digitos que analizar)
{
  X1=a;
  a=a/10;
  X2=a*10;
  XF=X1-X2;
  b=XF;
  RESTO=b%2;
  
  if(RESTO!=0)//si se cumple es porque es impar
  {
   SUMA=SUMA+XF;//suma los digitos impares
  }
}
while(a!=0);

return(SUMA);//regresa el valor de la suma de los impares
}


