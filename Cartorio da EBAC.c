#include <stdio.h> //biblioteca de comunicação com usúario
#include <stdlib.h> //biblioteca de alocação de espaço
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsavel por cuidar de string

int registro () //Função responsável por cadastrar usuarios no sistema

{
	//Inicio de criação de Variáveis/Strings
    char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //Colêtando informações do usuário
	scanf ("%s", cpf); // %s Refere-se a Strings
	
	strcpy(arquivo, cpf);  //responsavel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	fprintf(file, cpf); //salva o valor da variavel 
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf ("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);	
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	
	system("pause");
}

int consulta ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o usuario a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo. Não localizado! \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Essas são as informações do usuario: ");
		printf("%s", conteudo);
		printf ("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE*file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema! \n");
		system ("pause");
	}
	
}
int main ()
{
	int opcao=0; //Definindo Variaveis
	int laco=1;
	char senhadigitada[10]="a";
	
	printf("### Cartório da EBAC ###\n\n");
	printf("Login de Administrador!\n\n Digite a sua senha:");
	scanf("%s", senhadigitada);
	
	if(senhadigitada[10]= "admin");
	
	{
		for(laco=1; laco=1;)
		{
       	system("cls");
       
	   	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
	   	printf ("              ###Cartório da EBAC ###\n\n"); // Inicio do Menu
	   	printf (" Aperte a tecla numérica para selecionar a opção desejada.\n\n");
	   	printf (" \t1 - Registro de Usúario\n");
	   	printf ("\t2 - Consultar Usúario\n");
	   	printf ("\t3 - Deletar Usúario\n"); 
	   	printf ("\t4 - Sair do sistema.\n\n");
	   	printf ("opção: "); // Fim do Menu

	   	scanf("%d" , &opcao); //Armazenando escolha do usuário
	
	   	system("cls"); // Responsável por limpar a Tela
	   
	   	switch(opcao) //Inicio da seleção do Menu
	   	{
	       		case 1:
	       		registro(); //Chamada de Funções
	        	break;
	       
	       		case 2:
	       		consulta(); //
		    	break;
		   
		   		case 3:
		   		deletar();
		    	break;
		    
		    	case 4:
		    	printf("Obrigado por ultilizar o sistema!\n");
		    	return 0;
		    	break;
		   
		   		default:
		   		printf("Essa opção não está disponível\n\n");
	        	system("pause");
		   		break; // Fim da seleção
			}
		}
	}
		else
		printf("Senha incorreta!");
	
}

		
	
	
