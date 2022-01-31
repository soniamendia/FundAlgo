#include <stdio.h>

//DataType integer, float, string, caracteres//
// cajitas de almacenacion, para usarlas despues en codigo//
// Global variables//
int edad = 19;
float estatura = 1.55;
char* name = "Sonia Mendia";
char sexo =  'F';

int main(){
    int after10years = suma(edad, 10);
    printf("mi edad despues de 10 años: %d", after10years);
    return 0;
    
}