#include <stdio.h>
#include <stdlib.h>

void increment(void) {
      static unsigned int counter = 0;
      counter++;
      printf("%d ", counter);
}
unsigned int retrieve() {
    static unsigned int counter = 0;
    return counter;
}

int main(void) {
      for (int i = 0; i < 5; i++) {
      increment();
      }

      unsigned int current_value = retrieve();
      printf("\nCurrent value: %d\n", current_value);

      return 0;
}