#include <stdio.h>

int main(){
    int area, length, width;
    printf("Select the length side: ");
    scanf("%d",&length);
    printf("Select the width side: ");
    scanf("%d",&width);

    if (length == width ) printf("The figure is a square\n");
    else{
        area = length * width;
        printf("The area of the rectangle is %d\n",area);
    }

    return 0;
}