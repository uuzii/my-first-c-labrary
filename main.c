#include <stdio.h>
#include <stdlib.h>
#include "longer.h"

int main(int argc, char * argv[]) {
  int longestIndex = 0;
  validateLongerStr(&longestIndex, argc, argv);
  printf("Cadena más larga: %s\n", argv[longestIndex]);
  return 0;
}