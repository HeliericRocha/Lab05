#include <stdio.h>

int tempo(int hora, int minuto, int segundo)
{
    return hora*3600 + minuto*60 + segundo;
}

    int main(){
        int hora, minuto, segundo;
    printf("Digite uma hora minuto e segundos:");
    scanf("%d%d%d", &hora, &minuto, &segundo);
    printf("O tempo em segundos e: %d", tempo(hora, minuto, segundo));
    return 0;

    }
