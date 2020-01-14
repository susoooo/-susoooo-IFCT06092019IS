# include <stdio.h>
main()
{
	float notas[100];
	int alumnos;
	alumnos = 0;
	int contador;
	
	int seleccion;
	seleccion = 0;
	float suma;
	suma = 0.0;
	float media;
	media = 0.0;
	float menor;
	menor = 10.0;
	float mayor;
	mayor = 0.0;

	
	do
	{
     printf("Introduce_numero_de_alumnos\n");
	
	scanf ("%d",&alumnos);
	
		if (alumnos >  100)
		{ printf("Introduzca_un_numero_menor_que_100\n");
		}
	}
	while(alumnos > 100);
	

		for (contador=0;contador<alumnos;contador++)
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
	printf("5 AGREGAR NOTA\n");
	scanf("%d",&seleccion);
	if(seleccion==1)
	{	
			for (contador=0;contador<alumnos;contador++)
			{
					printf("%f\n",notas[contador]);
			}
	}
	else
	{		if(seleccion==2)
			{
					for (contador=0;contador<alumnos;contador++)
					{
							suma = suma + notas[contador];
					}
					media = suma/40;
					printf("%f\n",media);
			}
			else
			{
					if(seleccion==3)
					{
								for (contador=0;contador<alumnos;contador++)
								{
									if(menor>notas[contador])
									{
											menor= notas[contador];
									}
									
								}	printf("%f",menor);
					}
					else
					{
							if(seleccion==4)
							{
									for (contador=0;contador<alumnos;contador++)
									{
										if(mayor<notas[contador])
										{
												mayor= notas[contador];
										}
										
									}	printf("%f",mayor);
							}
							else
							{
								if(seleccion==5)
								{
									for (contador=0;contador<alumnos;contador++)
									scanf ("%f",&notas[contador]);
								}
							}
					}
			}

	}

}
while(seleccion != 0);
return (0);
}

