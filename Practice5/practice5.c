#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *integrate(int coefficient, int exponent){
    int new_exponent = exponent + 1;
    int new_coefficient = coefficient / new_exponent;
    char *result = malloc(50);
    if(result == NULL) return NULL;
    sprintf(result, "%dx^%d", new_coefficient, new_exponent);
    return result;
}

int main(){
    int coefficient = 20;
    int exponent = 1;
    char *result = integrate(coefficient, exponent);
    printf("Integrated result: %s\n", result);
    free(result);
    return 0;
}