#include <stdio.h>
#include <math.h>

int main () //Santiago Guerrero Isaac Alejandro
{
	int a,b,max=0;
	printf ("\nEncontrar el m.c.d. de dos numeros enteros");
	printf("\nIngrese un numero entero: ");
	scanf("%d",&a);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&b);

int main ()
 {
	int a,b,max=0;         // Variables

    printf ("\nEncontrar el m.c.d. de dos numeros enteros");
    printf("\nIngrese un numero entero: ");                  // Entrada
    scanf("%d",&a);
    printf("\nIngrese el segundo numero: ");                // Entrada
    scanf("%d",&b);

    if (a>0 && b>0 && a!=b) //Evalua que lo valores ingresados sean mayores a 0 y diferentes entre si
    {
	    	   if (a>b)
	   {
		int aux=a;
		a=b;		// Poner el numero mas grande primero
		b=aux;
	   }

	int i=a;

	if (a>0 && b>0 && a!=b)
	while (!max && i>=1)
	{
		if (a>b)
		if (a % i ==0 && b % i == 0) //Evaluar si ambos modulos resulta 0
		{
			int aux=a;
			a=b;
			b=aux;
			printf ("\nEL MCD es %d",i);     // Salida
			max=1;
		}

		int i=a;

		while (!max && i>=1)
		else
		{
			if (a % i ==0 && b % i == 0)
			{
				printf ("\nEL MCD es %d",i);
				max=1;
			}
			else
			{
				i--;
			}
			i--;  //Si el modulo de a y b % i no es 0, resta 1 al valor de i hasta que la condicion se cumpla
		}
	}

     }
     else
     {
	if (a==b)
	{
		printf("\nDebes ingresar numeros diferentes");    // Salida
	}
	else
	{
		if (a==b)
		{
			printf("\nDebes ingresar numeros diferentes");
		}
		else
		{
			printf("\nDebes ingresar numeros positivos");
		}
		printf("\nDebes ingresar numeros positivos");     // Salida
	}
      }



	return 0;
}

  return 0;
  }
