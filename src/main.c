#include "lib/lib.h"
#include <stdio.h>
int main() {
  linked_list input = create_list();
  for (int i = 1; i < 10; i++) {
    append(&input, i);
  }
  for (int i = 0; i < 9; i++) {
    printf("%d\t", get_value(&input, i));
  }
  printf("\n");
  printf("%d\n", get_index(&input, 10));
  delete_list(&input);
  return 0;
}
