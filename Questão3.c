#include <stdio.h>

// questao3

    int main(){
    int senhaCadastrada, senhaAdicionada;

    printf("senha cadastrada: ");
    scanf("%d", &senhaCadastrada);

    
    while (1){ //faz um loop ate a senha cadastrada ser adiconada.
    printf("Digite a senha: ");
    scanf("%d", &senhaAdicionada);

    if (senhaAdicionada == senhaCadastrada) {
        printf("senha valida!\n");
        break;
    } else{
            printf("senha invalida!\n");
        }
    }

    return 0;
}
