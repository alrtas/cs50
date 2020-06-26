#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
    {
        string newname;
        string newnumber;
    }
    person;

int main (void)
{

//Numbers.c
   int numbers[6] = { 4, 8, 15, 16, 23, 42 };

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found \n");
        }
    }
    printf("Not found \n");

//Names.c
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "EMMA") == 0)
        {
            printf("Found \n");
            //return 0; //exit program
        }
    }
    printf("Not found \n");
    //return 1;

//PhoneBook.c
    person people[4];
    people[0].newname = "EMMA";
    people[0].newnumber = "617-555-0100";
    
    people[1].newname =  "RODRIGO";
    people[1].newnumber = "617-555-0101";
    
    people[2].newname = "BRIAN";
    people[2].newnumber = "617-555-0102";
    
    people[3].newname = "DAVID";
    people[3].newnumber = "617-555-0103";
    


    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].newname, "EMMA") == 0)
        {
            printf("%s\n", people[i].newnumber);
            //return 0; //exit program
        }
    }
    printf("Not found \n");
    //return 1; //exit program
    
    

// bubble sort swaps between local area numbers that are not sorted. 
// selection sort runs througth the array each time selecting the smalles number and then swiping

/*
BIG O Notation - Worst case scenario
 - O(n2)
 - O(n log n) 
 - O(n)
 - O(log n)
 - O(1)
Always carries the highest exponencial, ignores the rest

Omega Notation - Best case scenario
*/
}
