#include<stdio.h>
int numero;
int main()
{
	//se pide un numero a ingresar
		printf("ingrese un numero para realizar el conjertura de collatz: ");
		scanf("%d",&numero);
	do{
		//si el numero cuando se divide por 2 da 0 es por que es par
		//se compara si el numero es par
		if(numero %2 == 0)
		{
			numero=numero/2;
		}
		//se compara si cuando el numero se divide por 2 no es 0
		//en ese caso no es par
		else if(numero %2 != 0)
		{
		numero=(numero*3)+1;
		}
			printf("%d\n",numero);
	}while(numero!=1);

}
