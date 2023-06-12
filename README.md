# Singly Linked List
In a singly linked list, the node contains the value and the pointer to the next node. The functions used in the linked lists are,

- [x] Prepend
- [x] Append
- [x] Get index
- [x] Get value at
- [ ] Remove head
- [ ] Insert at index
- [ ] Remove at index

## Singly linked list data structure.
The structure of the linked list is,

The main struct contains the head and tail node pointers along with the size of the linked list. The Node struct contains the value contained in the node along with the pointer
to the next node.

__Psuedo Code__
```c
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
```
## Prepend
Prepend functions adds the new node as head and changing the current head as next of the new node. If there is no nodes in the list, the new node is both head and tail of the list.

__Psuedo Code__
```c
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
```
## Append
Append function adds the new node at the tail and update the tail of the list to new node. If there is no nodes in the list, the new node is both the head and tail of the list.

__Psuedo Code__
```c
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
```
## Get index
The index functions takes in a value and compare the value in the list and when a node matches the list it returns the index.

__Psuedo Code__
```c
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
```
## Get value at
Get value function will get the value of the node at a specific index. If the index is greater than or equal to the size it will return 0.

__Pseudo Code__
```c
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
```
## Remove head
## Insert at index
## Remove at index
# Licence
This project is licenced under <mark>GPL3.0 or later</mark>licence.Feel free to use the project.
