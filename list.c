#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List createCell(int value)
{
  List list = (List) malloc(sizeof(struct cell));

  list->value = value;
  list->next = NULL;
  list->previous = NULL;

  return list;
}

List goToHead(List list)
{
  if (list->previous == NULL)
    return list;

  return goToHead(list->previous);
}

List goToTail(List list)
{
  if (list->next == NULL)
    return list;

  return goToTail(list->next);
}

List prependInList(List list, int value) {
  list = goToHead(list);
  list->previous = createCell(value);
  list->previous->next = list;

  return list->previous;
}

List appendInList(List list, int value) {
  list = goToTail(list);
  list->next = createCell(value);
  list->next->previous = list;

  return list->next;
}

void printList(List list)
{
  printf("%d ", list->value);
  
  if (list->next != NULL)
    return printList(list->next);
  
  printf("\n");
}