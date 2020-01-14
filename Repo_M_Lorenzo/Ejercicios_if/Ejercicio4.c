#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int m_dia;
int sexo;

//INICIALIZACION

m_dia=0;
sexo=0;


//PROGRAMA

printf("SALUDADOR AUTOMÁTICO\n");
printf("Introduzca el momento del dia:\n");
printf("1 - Mañana\n");
printf("2 - Tarde\n");
printf("3 - Noche\n");
scanf("%d",&m_dia);
printf("%d\n",m_dia);

printf("Introduzca su sexo:\n");
printf("1 - masculino\n");
printf("2 - femenino\n");
scanf("%d",&sexo);
printf("%d\n",sexo);

	if(m_dia==1 && sexo==1)
	{	
	printf("Buenos días señor\n");
	}

	if(m_dia==1 && sexo==2)
	{	
	printf("Buenos días señora\n");
	}
	
	if(m_dia==2 && sexo==1)
	{	
	printf("Buenas tardes señor\n");
	}

	if(m_dia==2 && sexo==2)
	{	
	printf("Buenas tardes señora\n");
	}				
	
	if(m_dia==3 && sexo==1)
	{	
	printf("Buenas noches señor\n");
	}	

	if(m_dia==3 && sexo==2)
	{	
	printf("Buenas noches señora\n");
	}
	
	if(m_dia!=1 && m_dia!=2 && m_dia!=3)
	{
	printf("Momento del dia equivocado\n");
	}
	
	if(sexo!=1 && sexo!=2)
	{
	printf("Sexo erróneo\n"	);
	}


}

		
