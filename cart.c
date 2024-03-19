#include <stdio.h> //comunica��o com o usuario tlg
#include <stdlib.h> //aloca��o de espa�o na memoria tlg
#include <locale.h> //aloca��o de texto por regionalidade tlg 
#include <string.h> //biblioteca de strings tlg

int registro ()
{
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite usu�rio a ser cadastrado ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser consultado ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf (file,sobrenome);
	fclose (file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf (file,cargo);
	fclose (file);
	
	system( "pause");	
	
}

int consulta ()
{
	setlocale(LC_ALL, "portuguese"); 
	
    char cpf [40];	
	char conteudo [200];
    
    printf("Digite o cpf a ser consultado ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if (file == NULL)
    {
        printf("Arquivo n�o localizado \n");
    }
    
    while(fgets(conteudo,200,file) != NULL)
    {
    	printf("Essa s�o as informa��es do usuario \n");
    	printf("%s", conteudo);
    	printf("\n\n");	
	}
    
    system("pause");
    
}

int deletar ()
{
    setlocale(LC_ALL, "portuguese"); 
	
	char cpf[40];
	
    printf("digite o cpf do usu�rio a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("cpf n�o encontrado \n");
		system("pause");
	}
	
	
	
}



int main()
   {  
   int opcao=0; //definindo as variaveis
   int laco=1;
   
     
   for(laco=1;laco=1;)
   {
   
   system("cls");
   
   setlocale(LC_ALL, "portuguese"); 
   
   printf("\t ### Cart�rio ###\n\n");
   printf (" Escolha a op��o mais desejada \n\n ");
   printf ( "\t 1 Registro de Nomes ");
   printf ( "\t 2 consulta de Nomes");
   printf ( "\t 3 Deletar Nomes\n\n");
   printf ( "Op��o:  ");

   
   scanf("%d", &opcao);
   
   system("cls");
   
   switch(opcao)
   {
   	    case 1:
   	  	registro ();
   	  	break;
   	  	
   	  	case 2:
   	  	consulta ();
   	  	break;
   	  	
   	  	case 3:
   	  	deletar ();
   	  	break;
   	  	
   	  	default:
   	  	printf("Est� op��o n�o est� dispon�vel\n");
   	  	system("pause");
   	  	break;
   	  	
   	
   }
   
  
  
   }
 }
