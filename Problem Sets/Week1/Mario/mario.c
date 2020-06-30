//World 1-1 righ aligment piramid
#include <cs50.h>
#include <stdio.h>

void mario(int n);
//function to see if is a number
bool isPositive(int number);

int main(void)
{
//get some values from user
    int input = ' ';
    do
    {
        input = get_int("Height: ");

    }
    while (isPositive(input));

    //call the functions
    mario(input);

}

void mario(int n)
{
    for (int i = 0; i < n; i++) //vai dar o conceito de altura ou linhas
    {
        for (int k = 0; k < (n - i); k++)
        {
            //vai imprimir os espacos necessarios para fazer o alinhamento da direita
            printf(" ");
        }
        
        //cria a primeira piramede
        for (int j = 0; j <= i; j++)
        {
            //prints one # at time for this loop
            printf("#");
        }
        
        printf("  ");
        
        //cria a segunda piramede
        for (int j = 0; j <= i; j++)
        {
            //prints one # at time for this loop
            printf("#");
        }

        printf("\n");
    }
}
bool isPositive(int number)
{
    if (number < 0 || number > 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}