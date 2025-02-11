#include <stdio.h>

int main() {
  int arr[2][3] = {{1, 7, 6}, {5, 2, 3}};

  for (int i = 0; i < 2; i++) { // цикъл през 2та реда, а не през 3
    for (int j = 0; j < 3; j++) { // цикъл през 3те колони, а не през 2
      if (arr[i][j] % 2 == 1) {
        printf("%d ", arr[i][j]);
      }
    }
  }

  return 0;
}
