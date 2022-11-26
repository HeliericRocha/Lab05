#include <stdio.h>
#include <math.h>

float hipotenusa(float c1, float c2){
    return sqrt((c1*c1)+(c2*c2));
}
int main(){
    float ca1, ca2;
    printf("Digite dois catetos:");
    scanf("%f%f",&ca1, &ca2);
    printf("O valor da hipotenusa e: %f", hipotenusa(ca1, ca2));

    return 0;

}
