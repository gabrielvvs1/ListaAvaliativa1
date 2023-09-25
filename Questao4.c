#include <stdio.h>

// questao4

    int main(){
    char nivel;
    double salario;
    
    scanf("%c", &nivel);
    scanf("%lf", &salario);

    switch (nivel){
        case 'a':
            salario *= 1.05;
            break;
        case 'b':
            salario *= 1.07;
            break;
        case 'c':
            salario *= 1.08;
            break;
    }
    printf("R$ %.2lf\n", salario);

 
    return 0;
}