#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){
    printf("--while loop--\n");
    while (count < 100){
        printf("count: %d\n", count);
        count = count +1;

    } 
    printf("--for definite--\n");
    for (int i = 1; i <= 100; i = i + 1){
        printf("i: %d\n", i);
    }
    printf("-- for loop indefinite--\n");
    for (int i = 1; ; i = i + 1){

        printf("for count: %d\n", i);
        if (i >= 125){
            break;
        }

    }
        
    
    return 0;
}