#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float calcula(float valorN);
int main()
{   float controle;
    int valorN;
    setlocale(LC_ALL,"portuguese");
    printf("(EX6) Diga o valor de N\n");
    scanf ("%d",&valorN);
    controle = calcula(valorN);
    printf ("O valor é: %f\n",controle);

    return 0;
}

float calcula(float valorN)
{
    int a=1,b=1,auxiliar,div;
    float conta, controle=0;

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
    return controle;

}
