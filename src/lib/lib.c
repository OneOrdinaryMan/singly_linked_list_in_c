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
void append(linked_list *input_list, int value) {
  node *new_node = create_node(value);
  if (input_list->size == 0) {
    input_list->head = new_node;
    input_list->tail = new_node;
    input_list->size++;
    return;
  }
  node *current_tail = input_list->tail;
  input_list->tail = new_node;
  current_tail->next = new_node;
  input_list->size++;
}
int get_index(linked_list *input_list, int value) {
  if (input_list->size == 0) {
    printf("The list is empty.\n");
    return -1;
  }
  int i = 0;
  node *current_node = input_list->head;
  for (; i < input_list->size; i++) {
    if (current_node->value == value) {
      return i;
    }
    current_node = current_node->next;
  }
  return -1;
}
int get_value(linked_list *input_list, int index) {
  if (index >= input_list->size) {
    printf("The list is empty.\n");
    return 0;
  }
  int i = 0;
  node *current_node = input_list->head;
  for (; i < index; i++) {
    current_node = current_node->next;
  }
  return current_node->value;
}
int remove_head(linked_list *input_list) {
  if (input_list->size == 0) {
    printf("The list is empty.\n");
    return 0;
  }
  node *current_head = input_list->head;
  int return_value = current_head->value;
  input_list->head = current_head->next;
  free(current_head);
  input_list->size--;
  return return_value;
}
void insert_at_index(linked_list *input_list, int index, int value) {
  if (index > input_list->size) {
    printf("Index out of bounds!\n");
    return;
  } else if (index == 0) {
    prepend(input_list, value);
    return;
  } else if (index == input_list->size) {
    append(input_list, value);
    return;
  }
  node *prev_node = input_list->head;
  int i = 0;
  for (; i < index - 1; i++) {
    prev_node = prev_node->next;
  }
  node *new_node = create_node(value);
  node *curr_node = prev_node->next;
  prev_node->next = new_node;
  new_node->next = curr_node;
  input_list->size++;
}
int remove_at_index(linked_list *, int);
void delete_list(linked_list *input_list) {
  while (input_list->size != 0) {
    remove_head(input_list);
  }
}
