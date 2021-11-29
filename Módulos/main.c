#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void calcula();
int valorN;
float controle;
int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("(EX3)Diga o valor de N\n");
    scanf ("%d",&valorN);
    calcula(valorN);
    return 0;
}

void calcula()
{
    int a=1,b=1,auxiliar,div;
    float conta;

    for (int i=2; i<=valorN; i++){
        div= i*2;
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        if (conta>0)
        {
            conta= (float) a/div*(-1);
        }
        else {
            conta= (float) a/div;
        }
        controle = controle + conta;
    }
    controle = controle + 0.5;
    printf ("O valor é: %f",controle);

}

