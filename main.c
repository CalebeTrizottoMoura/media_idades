#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 100

void limpar_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){}
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int vet[TAM], i, idades = 0, soma = 0, cont = 0;

    for(i = 0; i < TAM; i++){ //Há lixo de memória nos vetores, por isso estou inserindo os zeros.
        vet[i] = 0;
    }

    i = 0;
    printf("======== MÉDIA DE IDADES ========\n");
    printf("Digite um número negativo para calcular as médias ou sair.\n");
    while(idades >= 0){
        printf("%dº número: ", i + 1);
        scanf("%d", &vet[i]);
        limpar_buffer();
        idades = vet[i];
        if(vet[i] > 0){
            cont = cont + 1;
            soma = soma + vet[i];
        }
        i++;
    }

    system("cls");
    printf("======== RESULTADO ========\n");
    if(soma == 0){
        printf("Impossível calcular :(\n");
    }else{
        float media = (float) soma / cont;
        printf("(");
        for(i = 0; i < TAM; i++){
            if(vet[i] > 0){
                printf("%d", vet[i]);
                if(i < cont - 1){ //Verifica se não é o último elemento a ser impresso.
                    printf(" + ");
                }
            }
        }
        printf(") / %d = %.2f\n", cont, media);
        printf("\nPortanto, %.2f é a média das idades fornecidas.\n", media);
    }

    return 0;
}
