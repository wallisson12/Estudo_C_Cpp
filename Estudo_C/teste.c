//Biblioteca padrão de entrada e saida
#include <stdio.h>

//Biblioteca padrao para booleano
#include <stdbool.h>

int main(){
    //Variaveis e prints de variaveis

    //Inteiros %d
    int a = 10;
    int b = 20;

    //Floats %f 
    //Para limitar as casas podemos especificar as casas decimais com %.numerof
    float nota1 = 5.5;
    float nota2 = 4.3;


    //Double %lf
    //Comtém maior capacidade de guardar numeros mais casas decimas
    double euler = 2.718281828459045;

    //Char %c
    //Vai conter um unico char
    char character = 'a';
    

    //String (Array de char) %s
    //Em C a string é um array de char
    char nome[] = "Um nome qualquer";


    //Booleano %d
    bool isTeste = false;


    ////////////////////////////////////////////////////////

    //A funcao scanf eh uma maneira de capturar o que o usuario digita no terminal 
    //scanf("%TipoDaVariavel",&Variavel)

    int idade = 0;
    float dinheiro = 0.0f;
    char letra = '\0';
    char nome2[50] = "";

    //Porque na string nao precisa referenciar o local da memoria ?
    printf("Digite seu nome: ");
    scanf("%s",nome2);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    //Nesse caso precisa do espaco antes do %c
    //O espaco antes do %c serve para que o scanf ignore o espaco que ficou no buffer do scanf anterior
    printf("Digite sua letra favorita: ");
    scanf(" %c",&letra);

    //Exibindo os valores
    printf("Seu nome eh %s e sua idade %d e sua letra favorita eh %c \n",nome2,idade,letra);


    //Remove o \n que ficou no buffer do scanf anterior
    getchar();

    //Utilizando o fgets para ler as strings com espaco em branco entre elas
    //fgets(variavel,tamanho,stdin)
    //O stdin eh um dos canais de entrada dos dados, no caso o teclado
    //Ele pode ler teclado arquivo etc

    char nomeCompleto[100] = "";

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto,100,stdin);

    printf("Seu nome eh: %s \n",nomeCompleto);

    


    return 0;
}