#include <stdio.h>
#include "list.h"

int main(void) {
  List list = createCell(1);

  list = appendInList(list, 2);
  list = appendInList(list, 3);
  list = appendInList(list, 4);
  list = appendInList(list, 5);

  List head = goToHead(list);
  List tail = goToTail(list);

  printf("List: ");
  printList(head);

  printf("Head of the list: %d\n", head->value);
  printf("Tail of the list: %d\n", tail->value);

  return 0;
}