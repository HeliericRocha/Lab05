#include <stdio.h>

int positivoOuNegativo(int num){
    if(num>0)return 1;
    else if(num == 0) return 0;
    else return -1;
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%d", positivoOuNegativo(num));
    return 0;
}
