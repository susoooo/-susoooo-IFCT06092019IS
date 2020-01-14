# include <stdio.h>
main()
{
	float notas[40]:
	int contador;
	int seleccion;
	seleccion = 0;
	float suma;
	suma = 0.0;
	float media;
	media = 0.0;
	float menor;
	menor = 10.0
	float mayor;
	mayor = 0,0;


	for (contador=0;contador<40;contador++)
  {
		scanf ("%f",&notas[contador]);
	}
do
{
	printf("1 NOTAS\n");
	printf("2 MEDIA\n");
	printf("3 MENOR\n");
	printf("4 MAYOR\n");
	printf("0 SALIR\n");
	scanf("%d;seleccion);
	if(seleccion==1)
	{	
			for (contador=0;contador<40;contador++)
			{
					printf("%f;notas[contador]);
			}
	}
	else
	{		if(seleccion==2)
			{
					for (contador=0;contador<40;contador++)
					{
							suma= suma + notas[contador}
					}
					media = suma/40;
			}
			else
			{
					if(seleccion==3)
					{
								for (contador=0;contador<40;contador++)
								{
									if(menor>notas[contador])
									{
											menor= notas[contador];
									}
									printf("%f",menor);
								}
					}
					else
					{
							if(seleccion==4)
							{
									for (contador=0;contador<40;contador++)
									{
										if(mayor<notas[contador])
										{
												mayor= notas[contador];
										}
										printf("%f",mayor);
									}
							}
					}
			}

	}

}
while(seleccion ! 0);











}
