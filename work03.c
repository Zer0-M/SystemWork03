#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_rand(){
  srand(time(NULL));
  return rand();
}

int main(){
  printf("%d\n",generate_rand());
}
