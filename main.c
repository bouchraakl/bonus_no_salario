
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //faz com que a função printf() mostre na tela os caracteres da Língua Portuguesa

int main()
{
    //Declaraçao de variáveis
    int tempo_de_servico ;
    float salario_atual , valor_aumento , novo_salario;

    //Faz referência à todos os aspectos da localização
    setlocale(LC_ALL , "");

    // Entrada de dados do usuário

    printf("\nInsira o seu tempo de serviço na empresa :");
    scanf("%d" , &tempo_de_servico);

    printf("\nInsira seu salário atual : R$ ");
    scanf("%f", &salario_atual);

    if (tempo_de_servico >= 5){
        valor_aumento = salario_atual * 0.20;// será executada se a expressão é verdadeira
        printf("\nVocê recebeu 20%% de aumento \n");

    }else{
        valor_aumento = salario_atual * 0.10;// será executada se a expressão é falsa
        printf("Você recebeu 10%% de aumento \n");
        }
    //Cálculo do Aumento de Salário
    novo_salario = valor_aumento + salario_atual;

    // Exibição dos Resultados
    printf("\nO Seu novo salario : R$ %2.f \n" , novo_salario);

    return 0;
}
