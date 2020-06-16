#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

void cough(int n);
int get_positive_int(void);

int main(void){
	printf("hello, world \n");
    string answer = get_string("What's your name?\n");
    printf("hello, %s \n", answer);
    
    int counter = 0;
    counter = counter +1;
    counter += 1;
    counter++;

    int i = 0;
    while( i < 50){i++;}
    for (int y =0; y<50; y++){}

    int age = get_int("What's your age? \n");
    printf("You are at least %i days old \n", age*365);

    float price = get_float("What's the price? \n");
    printf("Your total is %.2f. \n", price*1.0625);

    int n = get_int("n: ");
    if(n%2 == 0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
    //Note to self
    int x = get_int("x: ");
    int y = get_int("y: ");
    if(x<y){
        printf("%i, is less than %i\n",x,y);
    }else if(x>y){
        printf("%i, is greater than %i\n",x,y);
    }else{
        printf("%i, is equal to %i\n",x,y);
    }
    
    cough(3);

    float x = get_float("x: ");
    float y = get_float("y: ");
    printf("x/y = %f", x/f);
}


void cough(int n){
    for (int i = 0; i<3; i++ ){
        printf("cought \n");
    }
}

int get_positive_int(void){
    int n;
    do{
        n = get_int("Positive integer: ");
    }while(n < 1);
    return n;
}
