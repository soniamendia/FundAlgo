#include <stdio.h> //Internal library
#include "utils.h"
int num;


int main(){
    printf(" write a number ");
    scanf("%d", &num);
    int value = isGreaterThan10(num);
    if (value == 1){
        printf("Thenumber %d is greater than 10.\n", num);
    } else {
        printf("The number %d is not greater than 10.\n",num);
    }   
    return 0;
}