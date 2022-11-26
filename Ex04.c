#include <stdio.h>

void quadrado(int num) {
    int i = 1;

    while (i * i < num) {
            i = i + 1;
    }

    if (i * i == num) printf("%d Eh o quadrado perfeito de: %d", num, i);
    else
        printf("Não e um quadrado perfeito");
}
int main(){
    int x;
    printf("Digite um numero qualquerdes:");
    scanf("%d",&x );
    quadrado(x);
    return 0;
}
