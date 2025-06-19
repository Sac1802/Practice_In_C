#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Author: Sac1802
 */

/**
* @brief Performs the integration of a monomial of the type: ax^n.
*
* @param coefficient Coefficient of the term (a)
* @param exponent Exponent of the term (n)
* @return char* String with the result of the integration, for example "10x^2"
*/
char *integrate(int coefficient, int exponent){
    int new_exponent = exponent + 1;
    int new_coefficient = coefficient / new_exponent;
    // Reserva 50 bytes para la cadena de resultado
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