/* DATA STRUCTERS */
#include <stdio.h>
#include <stdlib.h>


 typedef struct node
 {
     int number;
     struct node *next; 
 }
 node;


int main(void)
{
    //Array with pre fixed size
    int lista[3] = {1,2,3};
    for (int i =0; i <3; i++)
    {
        printf("%i\n", lista[i]);
    }
     printf(" -- First part ---\n");
    
    //Same function with dynamic size
    int *listt = malloc(3 * sizeof(int)) ;
    if (listt == NULL)
    {
        return 1;
    }
    listt[0] = 1;
    listt[1] = 2;
    listt[2] = 3;
    
    //resizng to a 4 size array
    int *tmpo = malloc(4 * sizeof(int));
    if (tmpo == NULL)
    {
        return 1;
    }
    //copy integers from older array to new array
    for (int i = 0; i < 3; i++)
    {
      tmpo[i] = listt[i]; 
    }
    
    tmpo[3] = 4;
    free(listt);
    
    //prints the hole list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", tmpo[i]);
    }
    printf(" -- Second part ---\n");
    
    int *tmpp = realloc(tmpo, 5 * sizeof(int));
    if (tmpp == NULL)
    {
        return 1;
    }
    tmpp[4] = 5;
    free(tmpo);
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", tmpp[i]);
    }
    free(tmpp);
    printf(" -- third part ---\n");
    
    /*  
        data sctructer is how we storage data in a diferrent way
        linked list -> storage a list of values, different of an array because data is not sequencial, a data is point to where is the another part of data
        Dealing with all the problem above
    */
    
     //list of size 0
    node *list = NULL;
    //adds a number to list
    node *n = malloc(sizeof(node));
    if (n ==NULL)
    {
        return 1;
    }
    n->next = NULL;
    n->number = 1;
    list = n;
    
    n = malloc(sizeof(node));
    if (n ==NULL)
    {
        return 1;
    }
    n->next = NULL;
    n->number = 2;
    list->next = n;
    
    n = malloc(sizeof(node));
    if (n ==NULL)
    {
        return 1;
    }
    n->next = NULL;
    n->number = 3;
    list->next->next = n;
    
    //print list
    for (node *tmp = list; tmp != NULL; tmp = tmp->next )
    {
        printf("%i\n", tmp->number);
    }
    
    //free list
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    
}

//implementing a binary search for a binary tree
/*
    bool search (node *tree)
    {
        if (tree == NULL)
        {
            return false;
        }
        else if (50 < tree->number)
        {
            return search(tree->left);
        }
        else if (50 > tree->number)
        {
            return search(tree->right);
        }
        else if (50 == tree->number)
        {
            return true;
        }
    }
*/