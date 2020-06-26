//MEMORY
//0x means hexadecimal

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void swapPointer(int *a, int *b);
void swap(int a, int b);

int main(void)
{
    int n = 50;
    printf("%i\n", n);       //Prints the number
    printf("%p\n", &n);     //Prints the address of a variable
    printf("%i\n", * &n);   //Got to the address of a variable
    int *p = &n;            //p is a varible that points a variable that has a int value
    printf("%p\n", p);
    printf("%i\n", *p);

    char *s = "EMMA";       //pointer that point to a array of chars starts in the first letter and ends on a null terminator \0
    printf("%s\n", s);      //prints the name
    printf("%p\n", s);      //address of the string
    printf("%p\n", &s[0]);  //address of first character
    printf("%c\n", *s);     //prints the letter that the pointer gives
    printf("%c\n", *(s + 1)); //Sum the hex value to the next position, that has another letter (pointer arithmics)
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
    printf("%c\n", *(s + 4));

    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    string r = get_string("r: ");
    string t = get_string("t: ");

    if (r == t) //Those string will be always different because the program compares the value of the memory at they are allocated
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }


    char *st = get_string("st: ");
    char *cst = st;        //copy the strings into other variable

    cst[0] = toupper(cst[0]); //capitalize the first letter in the copy string

    printf("%s\n", st);
    printf("%s\n", cst); //Both capitalize
    //this happens because "string" is acctualy char*, and when we copy, we copy the address of the first variable, not the value.

    char *tt = get_string("tt: ");
    n = strlen(tt);
    char *mtt = malloc(n + 1);
    for (int ii = 0; ii < n + 1; ii++) //+1 to copy the null character, n for speed
    {
        mtt[ii] = tt[ii];
        //we can use instead strcpy(tt, mtt);
    }

    mtt[0] = toupper(mtt[0]); //capitalize the first letter in the copy string
    printf("%s\n", tt);
    printf("%s\n", mtt);

    free(mtt);

    //the swap function just change the copys of the values
    int x = 1;
    int y = 2;
    swap(x, y);

    //now changing to pointers
    printf("x: %i y: %i \n",  x, y);
    int xx = 1;
    int yy = 2;
    swapPointer(&xx, &yy);
    printf("x: %i y: %i \n",  x, y);
    
    /*
    Heap Overflow -> too much malloc without free
    Stack Overflow -> Too much use o memory from fuctions (ex: recursion withou end, loop)
    */
    
    int a;
    printf("a: ");
    scanf("%i", &a);
    
    
    //Does not work, because the address is with NULL size
    char *star = NULL;
    printf("star: ");
    scanf("%s", star);
    printf("%s", star);
    
    
    char str[5];
    printf("star: ");
    scanf("%s", str);
    printf("%s", str);
    
    
    //File
    FILE *file = fopen("phonebook.csv", "a");
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");
    
    fprintf(file, "%s,%s\n", name, number);
    
    fclose(file);
    
}

void swapPointer(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
