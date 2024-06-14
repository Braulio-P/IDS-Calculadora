#include <stdio.h>

int main ()
{
    int num1,num2;

    printf ("Bienvenido a la calculadora que RESTA");
    printf ("\n Dame el primer numero a Restar: ");
    scanf("%d",&num1);

     printf ("\n Dame el segundo numero a restar:");
    scanf("%d",&num2);

    int resultado = num1-num2;

     printf ("\n El resultado de la resta es: %d",resultado);
    return 0;

}