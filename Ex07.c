#include <stdio.h>


float temperatura(float c){
    return (c*9/5)+32;
}
int main(){
    float ce;
    printf("Digite uma temperatura em graus celcius:");
    scanf("%f",&ce);
    printf("A temperatura em graus fahrenheit e: %.2f", temperatura(ce));

    return 0;

}
