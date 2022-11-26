#include <stdio.h>

float volume(float raio){
    return 4.0/3.0*3.141592*raio*raio*raio;
}
int main(){
    float x;
    printf("Digite o raio de uma esfera:");
    scanf("%f", &x);
    printf("O volume da esfera e igual a: %f", volume(x));
    return 0;
    }
