/******************************************************************************
                            Quiz Player (simplificado)
                    CodeAspiras: https://codeaspiras.dev/discord
                    Author: Kaique Garcia <contato@kaiquegarcia.dev>
                        We play crazy challenges.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int qtdPerguntas = 2, qtdMaximaOpcoes = 4, tamanhoPergunta = 32, tamanhoOpcoes = 32;
    int gabaritos[qtdPerguntas];
    char perguntas[qtdPerguntas][tamanhoPergunta];
    char opcoes[qtdPerguntas][qtdMaximaOpcoes][tamanhoOpcoes];
    // pergunta 1
    strcpy(perguntas[0], "Essa é a primeira pergunta...?");
    strcpy(opcoes[0][0], "Sim...?");
    strcpy(opcoes[0][1], "Não...?");
    for (int i = 2; i < qtdMaximaOpcoes; i++) {
        strcpy(opcoes[0][i], "");
    }
    gabaritos[0] = 0;
    
    
    // pergunta 2
    strcpy(perguntas[1], "Essa é a terceira pergunta...?");
    strcpy(opcoes[1][0], "Sim...?");
    strcpy(opcoes[1][1], "Não...?");
    for (int i = 2; i < qtdMaximaOpcoes; i++) {
        strcpy(opcoes[1][i], "");
    }
    gabaritos[1] = 1;
    
    // rodar quiz
    int acertos = 0;
    for (int i = 0; i < qtdPerguntas; i++) {
        printf("Pergunta %d: %s\n", i+1, perguntas[i]);
        for (int j = 0; j < qtdMaximaOpcoes && opcoes[i][j][0] != '\0'; j++) {
            printf("Opção %d: %s\n", j+1, opcoes[i][j]);
        }
        
        printf("Resposta: ");
        int resposta;
        scanf("%d", &resposta);
        
        if ((resposta-1) == gabaritos[i]) {
            acertos++;
        }

        printf("--\n");
    }
    
    printf("Você acertou %d de %d pergunta(s)!", acertos, qtdPerguntas);

    return 0;
}
