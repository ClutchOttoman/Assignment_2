#include <stdbool.h>>
#include <stdio.h>
typedef struct node {
  int data;
  struct node *next;
} node;
void insertAfterN(node *head, int M, int N) {
  node *temp = head;
  while (true) {
    if (temp->data == N) {
      node *newNode = (node *)malloc(sizeof(node));
      newNode->data = M;
      newNode->next = NULL;
      newNode->next = temp->next;
      temp->next = newNode;
      temp = temp->next->next;
    } else {
      temp = temp->next;
    }
    if (temp->next == NULL) {
      break;
    }
  }
  if (temp->data == N) {
    node *newNode = (node *)malloc(sizeof(node));
    temp->next = newNode;
    newNode->data = M;
    newNode->next = NULL;
  }
}
