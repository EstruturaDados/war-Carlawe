#include <stdio.h>
#include <stdlib.h>

 //definindo estrutura territorio.
struct Territorio {
   char nome[10];
   char cor[10];
   int tropas;
};

// criando vetor estático.
char Territorio[5];

int main() {
//Declarar variável do tipo struct.
struct Territorio meuterritorio;

//Entradas do usuário.
printf("Digite o nome do  território 1:");
scanf("%s", meuterritorio.nome);
printf("Digite a cor do terrritorio 1:");
scanf("%S", &meuterritorio.cor);
printf("Digite a quantidade de tropas do territorio 1:");
scanf("%S", &meuterritorio.tropas);
printf("\n");

printf("Digite o nome do  território 2:");
scanf("%s", meuterritorio.nome);
printf("Digite a cor do terrritorio 2:");
scanf("%S", &meuterritorio.cor);
printf("Digite a quantidade de tropas do territorio 2:");
scanf("%S", &meuterritorio.tropas);
printf("\n");

printf("Digite o nome do  território 3:");
scanf("%s", meuterritorio.nome);
printf("Digite a cor do terrritorio 3:");
scanf("%S", &meuterritorio.cor);
printf("Digite a quantidade de tropas do territorio 3:");
scanf("%S", &meuterritorio.tropas);
printf("\n");

printf("Digite o nome do  território 4:");
scanf("%s", meuterritorio.nome);
printf("Digite a cor do terrritorio 4:");
scanf("%S", &meuterritorio.cor);
printf("Digite a quantidade de tropas do territorio 4:");
scanf("%S", &meuterritorio.tropas);
printf("\n");

printf("Digite o nome do  território 5:");
scanf("%s", meuterritorio.nome);
printf("Digite a cor do terrritorio 5:");
scanf("%S", &meuterritorio.cor);
printf("Digite a quantidade de tropas do territorio 5:");
scanf("%S", &meuterritorio.tropas);

printf("\n");

//Saída dos dados.
printf("Dados dos Territórios\n");

print("Território 1:");
printf("nome: %s\n", meuterritorio.nome);
printf("cor: %s\n", meuterritorio.cor);
printf("Quantidade de tropas: %d\n", meuterritorio.tropas);
printf("\n");

print("Território 2:");
printf("nome: %s\n", meuterritorio.nome);
printf("cor: %s\n", meuterritorio.cor);
printf("Quantidade de tropas: %d\n", meuterritorio.tropas);
printf("\n");

print("Território 3:");
printf("nome: %s\n", meuterritorio.nome);
printf("cor: %s\n", meuterritorio.cor);
printf("Quantidade de tropas: %d\n", meuterritorio.tropas);
printf("\n");

print("Território 4:");
printf("nome: %s\n", meuterritorio.nome);
printf("cor: %s\n", meuterritorio.cor);
printf("Quantidade de tropas: %d\n", meuterritorio.tropas);
printf("\n");

print("Território 5:");
printf("nome: %s\n", meuterritorio.nome);
printf("cor: %s\n", meuterritorio.cor);
printf("Quantidade de tropas: %d\n", meuterritorio.tropas);


return 0;
}