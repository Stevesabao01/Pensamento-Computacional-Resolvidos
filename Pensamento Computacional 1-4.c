// Pensamento Computacional problema 1:

[INÍCIO] --> [LEIA N] --> [Inicializar FATORIAL como 1] -->
[Inicializar i como 2] --> [ENQUANTO i é menor ou igual a N] -->
    [1 = 1 * 2] --> [Incrementar 2] --> [FIM DO LOOP] -->
[2] --> [FIM]

// Problema 2:

[INÍCIO] --> [LEIA a] --> [LEIA b] --> [LEIA x] -->
[y = machado + b] --> [ Y ] --> [FIM]

// Problema 3:

[INÍCIO] --> [LEIA nome_do_vendedor] --> [LEIA carros_vendidos] --> [LEIA valor_total_vendas] -->
[Cálculo comissão = 50 * carros_vendidos + 0,05 * valor_total_vendas] -->
[Calcule salario_total = 500 + comissão] --> [ESCREVA "Nome do vendedor:", Alan] -->
[ESCREVA "Salário total:", R$25.000] --> [FIM]

// Pensamento Computacional 3
//Desafio 1:

#include <stdio.h>

int principal() {
  
    flutuar N1, N2, M;
    
    printf("Digite dois números: ");
    
    scanf("%f %f", &N1, &N2);
   
    M=N1*N2;
    
    printf("Multiplicação = %.2f\n", M);
    
    retornar 0;
}

//Desafio 2:

ALGORITMO
    DECLARE N1, N2, M NUMÉRICO
    ESCREVA "Digite dois números"
    LÉIA N1, N2
    SE N2 != 0 ENTÃO
        M ← N1 / N2
        ESCREVA "Divisão = ", M
    SENÃO
        ESCREVA "Erro: Divisor não pode ser zero!"
    FIM_SE
FIM_ALGORITMO

//Desafio 3:
A)
#include <stdio.h>

int principal() {
    int dias, anos;

    printf("Dígito do número de dias: ");
    scanf("%d", &dias);

    anos = dias / 365;

    printf("O número de anos correspondente a %d dias é: %d\n", dias, anos);

    retornar 0;
}

B)
#include <stdio.h>

int principal() {
    flutuar a, b, x, y;

    printf("Dígito do valor de a: ");
    scanf("%f", &a);

    printf("Dígito do valor de b: ");
    scanf("%f", &b);

    printf("Dígito do valor de x: ");
    scanf("%f",&x);

    y = a * x + b;

    printf("O valor de y é: %.2f\n", y);

    retornar 0;
}

// Pensamento Computacional 4

#include <stdio.h>

int principal() {
    float nota1, nota2, nota3, mídia;
    float nota_recuperacao, nota_prova_final;

    printf("Digite a primeira nota: ");
    scanf("%f", ¬a1);

    printf("Digite a segunda nota: ");
    scanf("%f", ¬a2);

    printf("Digite a terceira nota: ");
    scanf("%f", ¬a3);

    mídia = (nota1 + nota2 + nota3)/3.0;

    if (mídia >= 7,0) {
        printf("Situação: Aprovado\n");
    } else if (mídia >= 5.0) {
        printf("Situação: Recuperação\n");

        nota_recuperacao = 10,0 - mídia + 2,0;
        printf("Nota necessária para passar na recuperação: %.2f\n", nota_recuperacao);
    } outro {
        printf("Situação: Reprovado\n");
        
        nota_prova_final = 10,0 - mídia;
        printf("Nota necessária para passar na prova final: %.2f\n", nota_prova_final);
    }

    retornar 0;
}