/* Dado um número inteiro "n", faça um programa em C para verificar
se este número é "Par" ou "Ímpar" */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    printf("Informe um número inteiro =  ");
    scanf("%d",&n);
    
    if (n%2 == 0)
       { printf("\nO número %d é Par! \n",n); }
    else
        { printf ("\nO número %d é Ímpar! \n", n); }
    
    system ("pause");
    return 0;
    }
