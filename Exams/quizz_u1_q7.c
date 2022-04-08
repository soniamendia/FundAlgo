#include <stdio.h>

int main(){
    int value1, value2, value3, tempvalue;
    printf("Select the first value: ");
    scanf("%d",&value1);
    printf("Select the second value: ");
    scanf("%d",&value2);
    printf("Select the third value: ");
    scanf("%d",&value3);

    if (value1>value2) tempvalue = value1;
    else tempvalue = value2;
    
    if (value3 > tempvalue) tempvalue = value3;
    
    printf("The max value is %d\n",tempvalue);
    
    return 0;
}