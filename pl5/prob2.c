#include <stdio.h>

float peso_ideal(float altura, char sexo)
{
    switch(sexo)
    {
        case 'M':
            return 72.7 * altura - 58;
        case 'F':
            return 62.1 * altura - 44.7;
        default:
            return 0;
    }
}

int main()
{
    float altura;
    char sexo;
    printf("Insira a altura da pessoa: "); scanf("%f", &altura);
    getchar();
    printf("Insira o sexo da pessoa(M/F): "); scanf("%c", &sexo);

    printf("O peso ideal seria de %.2f quilos\n", peso_ideal(altura, sexo));
}