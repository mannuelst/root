#include <stdlib.h>
#include <stdio.h>

// declaração e tipo primitivos em c
char caracter = 'c';
int numero = 12;
float decimal = 12.04;
double decimal_ = 12.0e12; // 0e12: notação científica 10¹²

printf("Hello Word!!!"); // output

/*
Tipos de dados para scanf
    %c=> char
    %f => double e float
    %d=> int
    %s: string[cadeia de caracteres]
    */

scanf("%d", &numero);
scanf("%c", &caracter);
scanf("%f %f ", &decimal, &decimal_);

// print valor do scan/var
printf("Valores: %d,  %f & %c", numero, decimal, caracter);

#define MINHA_CONST 32.792     // substituído em tempo de compilação onde tiver esta variável
const int outra_constante = 4; // é reservado um espaço na memória para esta variável

float variavel_ = MINHA_CONST;

/*
+: soma
*: multiplicação
-: subtração
/: divisão
%: resto da divisão
*/