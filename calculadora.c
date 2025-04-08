#include <stdio.h> //biblioteca padrão de entrada e saída
#include <stdlib.h> //biblioteca padrão de sistema

int main() {
    int n1; //variavel do primeiro numero chamada n1
    int n2; //variavel do segundo numero chamada n2
    char ope; //variavel da escolha da operação
    int resultado; //variavel com o resultado das operações

    printf("CALCULADORA\n");

    while (1) { //Looping
        printf("Digite um numero: "); //pede para digitar o primeiro numero da operação
        scanf("%d", &n1); //define o numero escolhido como a variavel "n1"
        printf(" %d\n" ,n1); //mostra o primeiro numero

        while (1) {
            printf("Digite a operacao que vai fazer: "); //pede para digitar a operação
            scanf(" %c", &ope); //define qual a operação e salva a variavel "ope"
            if (ope == '+' || ope == '-' || ope == '*' || ope == '/') {
                break;
            }
        } //se não for digitado uma das 4 operacoes continua perguntando qual a operacao

        printf("%d %c\n", n1, ope); //mostra o primeiro numero seguido da operação escolhida

        printf("Digite outro numero: "); //pede para digitar o segundo numero da operação
        scanf(" %d", &n2); //define o numero escolhido como a variavel "n2" e ignora o caractere de nova linha
        printf("%d %c %d\n", n1, ope, n2); //mostra o primeiro numero seguido da operação e o segundo numero

        if (ope == '+') {
            resultado = n1 + n2; //se foi digitado o sinal de + faz a soma dos numeros
        } else if (ope == '-') {
            resultado = n1 - n2; //se foi digitado o sinal de - faz a subtração dos numeros
        } else if (ope == '*') {
            resultado = n1 * n2; //se foi digitado o sinal de * faz a multiplicação dos numeros
        } else if (ope == '/' && n2 != 0) {
            resultado = n1 / n2; //se foi digitado o sinal de / e o n2 for diferente de zero faz a divisão dos numeros
        } else if (ope == '/' && n2 == 0) { //se foi digitado o sinal de / e o n2 for igual a zero envia mensagem de erro
            printf("Divisao por zero nao existe\n");
            continue; // Volta para o início do loop
        }

        system("cls"); // limpa a tela
        printf("CALCULADORA\n"); //escreve o titulo novamente
        printf("%d %c %d = %d\n", n1, ope, n2, resultado); //escreve o historico da ultima conta realizada.
    }

    return 0;
}