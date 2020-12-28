#include <stdio.h>
#include <string.h>
#include "longer.h"

void validateLongerStr(int * longestItemIndex, int itemsCount, char * items[]) {
  int temporaryLongestItemIndex = 0;
  long longestItemLength = 0;
  for (int i = 1; i < itemsCount; i++)
  {
    if(strlen(items[i]) > longestItemLength) {
      longestItemLength = strlen(items[i]);
      temporaryLongestItemIndex = i;
    }
  }
  *longestItemIndex = temporaryLongestItemIndex;
}