#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Biblioteca da Língua Portuguesa
                                  E após a utilização dessa biblioteca
                                    Será substituido o ponto(.) pela vírgula (,) */
             

/* Tabela de Classificação do IMC
Menor que 18,5: Abaixo do peso
18,5 a 24,9: Peso Normal
25,0 a 29,9: Sobrepeso
30,0 a 34,9: Obesidade de Grau I
35,0 a 39,9: Obesidade de Grau II
Maior que 40,0: Obesidade de Grau III */


// Programa principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    float peso, altura;  // Entrada de Dados
    float IMC; // Saída de Dados
    
    printf("Bem_vindo a Balança Virtual");
    
    printf("\n\nInforme o seu peso (kg):  ");
    scanf("%f",&peso);
    printf("\nInforme a sua altura (m):  ");
    scanf("%f",&altura);
    IMC = peso/(altura*altura);
    printf("\nSeu IMC = %.2f \n",IMC);
    
    /* Classificação do IMC
    Vamos usar uma estrutura condicional simples: if */
   
    if (IMC < 18.5)
       { printf("Você está magra, precisa se alimentar melhor! \n"); }
    if (IMC >= 18.5 && IMC < 24.9)
       { printf("Você está no peso ideal, Parábens! \n"); }
    if (IMC >= 25.0 && IMC < 29.9)
       { printf("Você está pouco gordo, precisa se cuidar mais! \n"); }
    if (IMC >= 30.0 && IMC < 34.9)
       { printf("Você está Obesidade com Grau I, precisa controlar mais a Dieta! \n"); }
    if (IMC >= 35.0 && IMC < 39.9)
       { printf("Você está Obesidade com Grau II, procure uma dieta mais equilibrada e academia! \n"); }
    if (IMC > 40.0)
       { printf("Você está com Obesidade com Grau III, procure um médico com urgência! \n"); }
    
    system ("pause");
    return 0;
    }
