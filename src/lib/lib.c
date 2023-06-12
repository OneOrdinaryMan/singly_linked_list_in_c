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
void prepend(linked_list *input_list, int value) {
  node *new_node = create_node(value);
  if (input_list->size == 0) {
    input_list->head = new_node;
    input_list->tail = new_node;
    input_list->size++;
    return;
  }
  node *current_head = input_list->head;
  new_node->next = current_head;
  input_list->head = new_node;
  input_list->size++;
}
void append(linked_list *, int);
int get_index(linked_list *, int);
int get_value(linked_list *, int);
int remove_head(linked_list *);
void insert_at_index(linked_list *, int);
int remove_at_index(linked_list *, int);
void delete_list(linked_list *);
