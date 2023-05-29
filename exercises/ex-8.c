#include <stdio.h>
#include <stdlib.h>

size_t clock_24(size_t a, size_t t) { return (a + t) % 24; }

int main(void) {
  size_t x[][2] = {
      {10, 3}, // 3 hours after 10:00
      {20, 8}, // 8 hours after 20:00
      {5, 12}, // 12 hours after 5:00
      {23, 2}, // 2 hours after 23:00
  };
  size_t nx = sizeof(x) / sizeof(x[0]);

  for (size_t i = 0; i < nx; i++) {
    printf("%zu hours after %02zu:00 is %02zu:00\n", x[i][1], x[i][0],
           clock_24(x[i][0], x[i][1]));
  }

  return EXIT_SUCCESS;
}
