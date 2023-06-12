#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};
typedef struct Node node;
typedef struct {
  int size;
  node *head;
  node *tail;
} linked_list;

linked_list create_list() {
  linked_list return_list;
  return_list.size = 0;
  return_list.head = NULL;
  return_list.tail = NULL;
  return return_list;
}
node *create_node(int value) {
  node *return_node = malloc(sizeof(node));
  return_node->value = value;
  return_node->next = NULL;
  return return_node;
}
void prepend(linked_list *, int);
void append(linked_list *, int);
int get_index(linked_list *, int);
int get_value(linked_list *, int);
int remove_head(linked_list *);
void insert_at_index(linked_list *, int);
int remove_at_index(linked_list *, int);
void delete_list(linked_list *);
