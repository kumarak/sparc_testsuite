#include <stdio.h>

unsigned int arr[10] = {10, 200, 456, 21, 876, 876198, 876781, 875362, 87871, 987615423};

int main() {
  unsigned char *ptr = arr;
  int i = 0;
  for(i = 0; i < 40; i++) {
   printf("%x ", ptr[i]);
  }
  return 0;
}

