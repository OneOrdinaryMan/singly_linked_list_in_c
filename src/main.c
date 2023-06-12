#include "lib/lib.h"
#include <stdio.h>
int main() {
  linked_list input = create_list();
  for (int i = 1; i < 10; i++) {
    append(&input, i);
  }
  printf("%d\n", get_index(&input, 4));
  printf("%d\n", get_value(&input, 0));
  delete_list(&input);
  return 0;
}
