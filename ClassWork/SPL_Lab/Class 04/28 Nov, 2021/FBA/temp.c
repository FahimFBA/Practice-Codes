#include <stdio.h>

void main() {
  int rows, i, j;
  printf("Enter Number Of Rows You Want: ");
  scanf( "%d", &rows );
 
  for(i = rows; i >= 1; i--) {
    for(j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}

