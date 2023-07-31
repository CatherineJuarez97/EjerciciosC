/*Conversion de temperatura*/
#include <stdio.h>
#include <conio.h>
main()
{
	float tempOriginal, tempConvertida;
	int opcion;/*variable*/
	printf("Escriba la temperatura: ");
	scanf("%f",&tempOriginal);
	printf("Tipo de conversion (1 - C a F, 2- F a C): ");
	scanf("%d",&opcion); //solicita tipo de connversion
	tempConvertida = (opcion==1)*(9*tempOriginal/5+32)+(opcion==2)*(5.0/9*(tempOriginal-32));
	printf("Valor convertido: %f\n",tempConvertida);
	getch();
}
