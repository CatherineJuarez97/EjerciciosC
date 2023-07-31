#include <stdio.h>
#include <conio.h>
main()
{
	int calificacion;
	/*Leer calificacion*/
	printf("Escriba la calificacion: ");
	scanf("%d",&calificacion);
	/*Imprime letrero*/
	switch(calificacion)
	{
	case 0:case 1:case 2:case 3:case 4:case 5:
	printf("reprobado\n");break;
	case 6:printf("suficiente\n");break;
	case 7:printf("bien\n");break;
	case 8:printf("muy bien\n");break;
	case 9:printf("excelente\n");break;
	case 10:printf("sobresaliente\n");break;
	default:printf("calificacion no valida\n");
	getch();
	
	}
}
