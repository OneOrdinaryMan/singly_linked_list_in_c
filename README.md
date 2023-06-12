# Singly Linked List
In a singly linked list, the node contains the value and the pointer to the next node. The functions used in the linked lists are,

- [x] Prepend
- [ ] Append
- [ ] Get index
- [ ] Get value at
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
## Get index
## Get value at
## Remove head
## Insert at index
## Remove at index
