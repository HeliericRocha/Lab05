#include <stdio.h>



void data(int dia, int mes, int ano){

    if(mes == 1) printf("%d de janeiro de %d", dia, ano);
        else if(mes == 2 ) printf("%d de fevereiro de %d", dia, ano);
        else if(mes == 3 ) printf("%d de marco de %d", dia, ano);
        else if(mes == 4 ) printf("%d de abril de %d", dia, ano);
        else if(mes == 5 ) printf("%d de maio de %d", dia, ano);
        else if(mes == 6 ) printf("%d de junho de %d", dia, ano);
        else if(mes == 7 ) printf("%d de julho de %d", dia, ano);
        else if(mes == 8 ) printf("%d de agosto de %d", dia, ano);
        else if(mes == 9 ) printf("%d de setembro de %d", dia, ano);
        else if(mes == 10 ) printf("%d de outubro de %d", dia, ano);
        else if(mes == 11 ) printf("%d de novembro de %d", dia, ano);
        else if(mes == 12 ) printf("%d de dezembro de %d", dia, ano);

}
int main(){
    int x, y, w;
     printf("Digite uma data: \n");
     scanf("%d/%d/%d",&x,&y,&w);
     data(x, y, w);
     return 0;
}
