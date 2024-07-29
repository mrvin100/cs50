#include <stdio.h>
#include <cs50.h>

void meow(void);
void meow_n_times(int n);

int main(void){

    // counter with while loop

    printf("print meow with while loop\n");

    int i = 3;
    while(i > 0){
        printf("meow!\n");
        i--;
    }

    // counter with for loop

    printf("print meow with for loop\n");

    for(int j = 0; j < 3; j++){
        meow();
    }

    // print meow n times
    meow_n_times(2)

}

// declare a function with no returned value called meow. Nb: you should import it this first line declaration at the top of the file only before it's calling and declare it too a the top of file.

void meow(void){
    printf("meow!\n");
}

void meow_n_times(int n){
    printf("print meow n times\n");
    for(int i = 0; i < n ; i++){
        printf("meow!\n");
    }
}
