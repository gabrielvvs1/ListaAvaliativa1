#include <stdio.h>

// questao3
    int main(){
    int senha, tentativa;
    
    scanf("%4d", &senha); 
    printf("senha cadastrada: %4d\n", senha);

    while (1){
        scanf("%4d", &tentativa); 

        if (senha == tentativa) {
            printf("senha valida!\n");
            break;
        } else {
            printf("senha invalida!\n");
        }
     }
    return 0;
}
