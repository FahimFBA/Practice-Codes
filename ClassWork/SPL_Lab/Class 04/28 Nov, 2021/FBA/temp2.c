#include <stdio.h>
 
void main() {
  int rows, i, j;
  printf("Enter Number Of Rows You Want: ");
  scanf("%d", &rows);
 
  for(i=1; i<=rows; i++) {
    for(j=1; j<=i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}