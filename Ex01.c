#include <stdio.h>



int dobro(num){
    return num*2;
        }

int main(){
    int numero;
    printf("Digite um numero:");
        scanf("%d" ,&numero);
            printf("O dobro do numero e: %d", dobro(numero));

return 0;
}
