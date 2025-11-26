#include <stdio.h>


 //definindo estrutura territorio.
struct Territorio {
   char nome[10];
   char cor [10];
   int tropas;
};

// criando vetor estático.
char Territorio[5];



int main() {

   //Declarar variável do tipo struct.
struct Territorio meuterritorio1;
struct Territorio meuterritorio2;
struct Territorio meuterritorio3;
struct Territorio meuterritorio4;
struct Territorio meuterritorio5;

//Entradas do usuário.
printf("******CADASTRO DOS TERRITÓRIOS******\n");
printf("\n");
printf("******Território 1******\n");
printf("Nome do  território: ");
scanf("%s", meuterritorio1.nome);
printf("Cor do Exercito: ");
scanf("%s", &meuterritorio1.cor);
printf("Número de tropas: ");
scanf("%d", &meuterritorio1.tropas);
printf("\n");

printf("******Território 2******\n");
printf("Nome do  território: ");
scanf("%s", meuterritorio2.nome);
printf("Cor do exército: ");
scanf("%s", &meuterritorio2.cor);
printf("Número de tropas: ");
scanf("%d", &meuterritorio2.tropas);
printf("\n");

printf("******Território 3******\n");
printf("Nome do  território: ");
scanf("%s", meuterritorio3.nome);
printf("Cor do exército: ");
scanf("%s", &meuterritorio3.cor);
printf("Número de tropas: ");
scanf("%d", &meuterritorio3.tropas);
printf("\n");

printf("******Território 4******\n");
printf("Nome do  território: ");
scanf("%s", meuterritorio4.nome);
printf("Cor do exército: ");
scanf("%s", &meuterritorio4.cor);
printf("Número de tropas: ");
scanf("%d", &meuterritorio4.tropas);
printf("\n");

printf("******Território 5******\n");
printf("Nome do  território: ");
scanf("%s", meuterritorio5.nome);
printf("Cor do exército: ");
scanf("%s", &meuterritorio5.cor);
printf("Número de tropas: ");
scanf("%d", &meuterritorio5.tropas);
printf("\n");
printf("Cadastro concluido!!!");
printf("\n");

//Saída dos dados.
printf("========================================\n");
printf("     MAPA DO MUNDO - ESTADO ATUAL\n");
printf("========================================\n");
printf("\n");
printf("Território 1:\n");
printf("- Nome: %s\n", meuterritorio1.nome);
printf("- Dominado por: Exército %s\n", meuterritorio1.cor);
printf("- Quantidade de tropas: %d\n", meuterritorio1.tropas);
printf("\n");

printf("Território 2:\n");
printf("- Nome: %s\n", meuterritorio2.nome);
printf("- Dominado por: Exército %s\n", meuterritorio2.cor);
printf("- Quantidade de tropas: %d\n", meuterritorio2.tropas);
printf("\n");

printf("Território 3:\n");
printf("- Nome: %s\n", meuterritorio3.nome);
printf("- Dominado por: Exército %s\n", meuterritorio3.cor);
printf("- Quantidade de tropas: %d\n", meuterritorio3.tropas);
printf("\n");

printf("Território 4:\n");
printf("- Nome: %s\n", meuterritorio4.nome);
printf("- Dominado por: Exército %s\n", meuterritorio4.cor);
printf("- Quantidade de tropas: %d\n", meuterritorio4.tropas);
printf("\n");

printf("Território 5:\n");
printf("- Nome: %s\n", meuterritorio5.nome);
printf("- Dominado por: Exército %s\n", meuterritorio5.cor);
printf("- Quantidade de tropas: %d\n", meuterritorio5.tropas);
printf("\n");


return 0;
}