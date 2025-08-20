#include <stdio.h>
int main()
{
int i;
float f;
char c;

printf("Digite um caractere: ");
scanf("%d", "&i");
printf("Digite um valor inteiro: ");
scanf("%f", "&f"); // complete o comando para ler a variável i
printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
scanf("%c", "&c");// complete o comando para ler a variável f
printf ("%d, %f, %c", i, f, c); // imprimeir as variável

return 0;
}