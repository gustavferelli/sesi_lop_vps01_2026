#include <stdio.h>
#include <windows.h>

void main (){
	SetConsoleOutputCP(CP_UTF8);
	char nome [20], sexo, continuar;
	int contagem = 0, m = 0, f = 0;
	
	do{
		printf("Qual seu nome?\n");
		scanf ("%s", &nome);
		printf("Qual o sexo 'm' ou 'f': ");
		scanf (" %c", &sexo);
		
		contagem++;
		if(sexo == 'm') m++;
		else f++;
	
		printf("Mais algum paciente 's' ou 'n': ");
		scanf(" %c", &continuar);
	}while(continuar == 's');
	printf("Hoje foram atendidos %d pacientes ");
	printf("%d do sexo masculino e %d do sexo feminino\n");
	
	getch();
}