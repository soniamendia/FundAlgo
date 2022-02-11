#include <stdio.h>

int main(){
    long int num1;
    printf("write a number");
    scanf("%d",&num1);

    int residue = num1%2;

    if (residue == 0){
        printf("the number (%ld) is even\n", num1);
    }else{
        printf("the number (%ld) is odd\n", num1);
    }
    return 0;

} 
