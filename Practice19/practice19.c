#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long zeros(long n) {
  long numberZeros = 0;
  int exponent = (int)floor(log(n) / log(5));
  for(int i = 1; i <= exponent; i++){
    numberZeros += n / (long)pow(5, i);
  }
  return numberZeros;
}

int main(void){
    long n = 14;
    printf("Number of trailing zeros in %ld! is %ld\n", n, zeros(n));
    return 0;
}