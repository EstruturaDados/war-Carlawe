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
printf("Digite o nome do  território 1:");
scanf("%s", meuterritorio1.nome);
printf("Digite a cor do terrritorio 1:");
scanf("%s", &meuterritorio1.cor);
printf("Digite a quantidade de tropas do territorio 1:");
scanf("%d", &meuterritorio1.tropas);
printf("\n");

printf("******Território 2******\n");
printf("Digite o nome do  território 2:");
scanf("%s", meuterritorio2.nome);
printf("Digite a cor do terrritorio 2:");
scanf("%s", &meuterritorio2.cor);
printf("Digite a quantidade de tropas do territorio 2:");
scanf("%d", &meuterritorio2.tropas);
printf("\n");

printf("******Território 3******\n");
printf("Digite o nome do  território 3:");
scanf("%s", meuterritorio3.nome);
printf("Digite a cor do terrritorio 3:");
scanf("%s", &meuterritorio3.cor);
printf("Digite a quantidade de tropas do territorio 3:");
scanf("%d", &meuterritorio3.tropas);
printf("\n");

printf("******Território 4******\n");
printf("Digite o nome do  território 4:");
scanf("%s", meuterritorio4.nome);
printf("Digite a cor do terrritorio 4:");
scanf("%s", &meuterritorio4.cor);
printf("Digite a quantidade de tropas do territorio 4:");
scanf("%d", &meuterritorio4.tropas);
printf("\n");

printf("******Território 5******\n");
printf("Digite o nome do  território 5:");
scanf("%s", meuterritorio5.nome);
printf("Digite a cor do terrritorio 5:");
scanf("%s", &meuterritorio5.cor);
printf("Digite a quantidade de tropas do territorio 5:");
scanf("%d", &meuterritorio5.tropas);
printf("\n");
printf("Cadastro concluido!!!");
printf("\n");

//Saída dos dados.

printf("******Dados dos Territórios*******\n");

printf("Território 1:\n");
printf("nome: %s\n", meuterritorio1.nome);
printf("Dominado por: Exército %s\n", meuterritorio1.cor);
printf("Quantidade de tropas: %d\n", meuterritorio1.tropas);
printf("\n");

printf("Território 2:\n");
printf("nome: %s\n", meuterritorio2.nome);
printf("Dominado por: Exército: %s\n", meuterritorio2.cor);
printf("Quantidade de tropas: %d\n", meuterritorio2.tropas);
printf("\n");

printf("Território 3:\n");
printf("nome: %s\n", meuterritorio3.nome);
printf("Dominado por: Exército: %s\n", meuterritorio3.cor);
printf("Quantidade de tropas: %d\n", meuterritorio3.tropas);
printf("\n");

printf("Território 4:\n");
printf("nome: %s\n", meuterritorio4.nome);
printf("Dominado por: Exército: %s\n", meuterritorio4.cor);
printf("Quantidade de tropas: %d\n", meuterritorio4.tropas);
printf("\n");

printf("Território 5:\n");
printf("nome: %s\n", meuterritorio5.nome);
printf("Dominado por: Exército: %s\n", meuterritorio5.cor);
printf("Quantidade de tropas: %d\n", meuterritorio5.tropas);


return 0;
}