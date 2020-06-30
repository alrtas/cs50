//World 1-1 righ aligment piramid
#include <cs50.h>
#include <stdio.h>

//proptotype the functions
void rightMario(int n);
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
    printf("Stored: %i \n", input);

    //call the functions
    rightMario(input);


}

void rightMario(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < (n - i); k++)
        {
            //prints the white spaces that right aligment the draw
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            //prints one # at time for this loop
            printf("#");
        }
        //creates a new line of #
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