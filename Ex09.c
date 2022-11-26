#include <stdio.h>
#include <math.h>


float volume(float altura,float raio){
    return 3.141592*altura*raio*raio;
}
int main(){
    float a, b;
    printf("Digite a altura e o raio de um cilindro: ");
    scanf("%f%f", &a,&b);
    printf("O volume do cilindro e igual a: %f", volume(a,b));
    return 0;

}
