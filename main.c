
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //faz com que a fun��o printf() mostre na tela os caracteres da L�ngua Portuguesa

int main()
{
    //Declara�ao de vari�veis
    int tempo_de_servico ;
    float salario_atual , valor_aumento , novo_salario;

    //Faz refer�ncia � todos os aspectos da localiza��o
    setlocale(LC_ALL , "");

    // Entrada de dados do usu�rio

    printf("\nInsira o seu tempo de servi�o na empresa :");
    scanf("%d" , &tempo_de_servico);

    printf("\nInsira seu sal�rio atual : R$ ");
    scanf("%f", &salario_atual);

    if (tempo_de_servico >= 5){
        valor_aumento = salario_atual * 0.20;// ser� executada se a express�o � verdadeira
        printf("\nVoc� recebeu 20%% de aumento \n");

    }else{
        valor_aumento = salario_atual * 0.10;// ser� executada se a express�o � falsa
        printf("Voc� recebeu 10%% de aumento \n");
        }
    //C�lculo do Aumento de Sal�rio
    novo_salario = valor_aumento + salario_atual;

    // Exibi��o dos Resultados
    printf("\nO Seu novo salario : R$ %2.f \n" , novo_salario);

    return 0;
}
