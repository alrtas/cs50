#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

const int N = 3;
float average(int length, int array[]);

int main(int argc, string argv[])
{
    //adding and using argv and argc
    if (argc != 2)
    {
        printf("Missign command-line argument\n");
        return 1;
    }
    else
    {
        printf("Hello, %s\n", argv[1]);
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("#\n");
    }
    //style50 week2.c
    //check50 week2.c
    //Single quotes for chars and double quotes for strings

    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3);
    printf("%c%c%c\n", (int) c1, (int) c2, (int) c3);

    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %i \n", (c1 + c2 + c3) / 3);

    //Capitalize consts variables
    int scoress[N];
    scoress[0] = 72;
    scoress[1] = 73;
    scoress[2] = 33;
    printf("Average: %i \n", (scoress[0] + scoress[1] + scoress[2]) / N);

    int n = get_int("Number of scores: ");
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }
    printf("Average: %.1f\n", average(n, scores));

    string names[4];
    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "BRIAN";
    names[3] = "DAVID";
    //Showing emmas names as a string
    printf("%s\n", names[0]);

    //Showing the null terminator charcter
    printf("%c%c%c%c%i \n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4]);

    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0 ; s[i] != '\0' ; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    //Little faster thant previous solution
    for (int i = 0 ; i < strlen(s) ; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");


    s = get_string("Before: ");
    printf("After: ");
    for (int i = 0 ; i < strlen(s) ; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            //Conver to upper
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");
    printf("After: ");
    for (int i = 0 ; i < strlen(s) ; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            //Conver to upper using toupper function
            printf("%c",  toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");

}

//Function that calculates an average
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float)sum / (float)length;
}
