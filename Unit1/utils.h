#include<stdio.h>

int isGreaterThan10(int num){
    int result = 0;
    if (num > 10){
        result = 1;
    } else {
        result = 0;
    }
    return result;
} 