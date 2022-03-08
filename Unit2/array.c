#include <stdio.h>

int main (){
    int myArray[3]={5, 2, 3};
    int index = 0;
    
    void printArray(int myArray[3], int arraySize){
        while(index < 3){
            printf("%d", myArray[index]);
            if (index < 2){
            printf (",");
            }
            index++;
        }
    }
    printf ("[");
    printArray(myArray, 3);
   
    
    printf("]");
    return 0;



}