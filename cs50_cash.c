#include <cs50.h>
#include <stdio.h>
#include <math.h>

//Pedir valor ao usuário
int main(void)
{

    float n;
    do
    {

        n = get_float("Dinheiro devido: ");
	n = round(n *100);

    }
    while (n < 1);

    //Determinando a quantidade de moedas
    int quarter = 0;
    while (n >= 25)
    {
    n = n - 25;
    quarter ++;
    }

    int dimes = 0;
    while (n >= 10)
    {
    n = n - 10;
    dimes++;
    }

    int nickels = 0;
    while (n >= 5)
    {
     n = n - 5;
      nickels++;
    }

    int pennies = 0;
    while (n >= 1)
    {
       n = n - 1;
       pennies++;
    }

    int c;
    c = quarter + dimes + nickels + pennies;

    //Imprimir resultado de moedas necessárias
    printf("%i\n", c);

}
