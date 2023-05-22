#include<stdio.h>
int main(){
	int i=0,maxcalle[5],max,acum=0,totalcalle=75,calle,luz;

	for(i=0;i<5;i++)
	{
		/*se pide el numero maximo que se quieren prender en esa calle*/
		printf("ingrese cuantas luces de la calle %d estan prendidas: ",i);
		scanf("%d",&maxcalle[i]);
		acum+=maxcalle[i];
		/*si el usuario ingresa un valor nulo o un numero mayor a 15 tira error*/
			while(maxcalle[i]<1||maxcalle[i]>15)
			{
				printf("---------ERROR\n");
				printf("ingrese cuantas luces de la calle %d estan prendidas: ",i);
				scanf("%d",&maxcalle[i]);
			}
	}
	totalcalle=totalcalle-acum;
	/*se pide el numero de la calle de la cual se quiera prender las luces*/
	printf("ingrese el numero de calle(1 al 5)");
	scanf("%d",&calle);
	/*si el usuario ingresa una calle que no pertenece a las 5 ingresadas tira error y pide que ingrese el numero de una calle*/
	while(calle<1||calle>5)
	{
		printf("ERROR\n");
		printf("ingrese el numero de calle(1 al 5)");
		scanf("%d",&calle);
}
printf("\nEl valor maximo de luces que quiere prender es de %d",maxcalle[calle-1]);
printf("\n\n");
/*se ingresa el valor de las luces que quiera encender en esa calle*/
printf("ingrese las luces que quiera encender(1 al 15)");
scanf("%d",&luz);
/*compara el valor maximo ingresado previamente con las luces que quiere prender para saber si es el maximo, si es el maximo imprime que se encendieron todas las luces*/
if(maxcalle[calle-1]==luz||maxcalle[calle-1]==0)
{
	printf("se encendieron el maximo de luces de esa calle\n");
}
/*si el usuario quiere prender 0 luces se imprime que la calle es oscura*/
if(luz==0)
{
	printf("\n\n");
	printf("Oscura");
}


if(maxcalle[calle-1]>=15-luz)
{
	printf("\nEsta calle es muy iluminada");
	printf("\n\n");
}

else if(maxcalle[calle-1]<=15-luz)
{
	printf("\nEsta calles es luminada");
	printf("\n\n");
}

else if(maxcalle[calle-1]<luz)
{
	printf("\nEsta calle es tenebrosa");
	printf("\n\n");
}

printf("el total de luces apagadas es de %d",totalcalle);
}
