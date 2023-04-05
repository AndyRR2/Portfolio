//Programador: Andy Rodriguez Rodriguez 
/*determina par o impar*/
#include<stdio.h>
int main()
{ 
	float y,x,x1,xr;//declarar variables que pueden tener una coma
	int x2,a;//declarar variables que son enteras
	do//realiza todo solo si no se cumple el while
	{
	printf("Ingresar un numero entero: "); //ingresa por teclado el numero entero
	scanf("%f",&x); //guarda el numero ingresado
	a=x;// cambia el valor con coma de x, a uno entero sin los numeros despues de la coma 
	x1=x*10;//multimplica por 10 tal que 12*10=120 � 12.5*10=125
	x2=(x1/10);// dvidi como entero a xd tal que 120/10=12 o 125/10=12
	x2=x2*10;// multiplica x2 por 10 agregandole un decimal tal que 12*10=120
	xr=x1-x2;//(numero a evaluar)resta x1 y x2 tal que 120-120=0 o 125-120=5
	if(x==0)//evalua si el numeor ingresado es 0
	{
	 printf("El numero es igual a 0\n");	
	}
	else//si no se cumple if anterior
	 {
	  if(xr!=0)//si el numero a evaluar es distinto de 0 siginifica que el ingresado tenia una coma, por lo que no es un entero el numeor ingresado
	 {
	 printf("El numero ingresado no es entero\n");	
	 }
	  else//todo lo siguiente se realiza solo si el numero ingresado es entero
	  {
	  	y=a%2;//calcula el resto del numero ingresado
	  	if(y==0)//si el resto es 0 es par
	  {
	  	printf("El numero es par\n");
	  }
	  else//si no es 0 es impar
	   {
	   	 printf("El numero es impar\n");
	   }
	  }
	  
     }
	
	 }
	 while(xr!=0);//vuelve al comienzo si se cumple el while
	 
	return (0);//final del programa
	
}
