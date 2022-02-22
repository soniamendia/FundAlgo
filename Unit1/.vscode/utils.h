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

//New//
void sleep(size_t m_s){  
    m_s = m_s/1000;
    clock_t initial_time = time(NULL); //Tiempo inicial//
    clock_t desired_time = initial_time + m_s ;
    for(clock_t current_time = initial_time; current_time < desired_time; current_time = time(NULL) ){};
}